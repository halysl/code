# -*- coding: utf-8 -*-
# @Date    : 2018-05-17 16:29:32
# @Author  : Light (halysl0817@gmail.com)
# @Link    : ${link}
# @Version : $Id$

import socket
import random
import argparse
import sys

MAX_BYTES = 65535

def server(interface, port):
    sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    sock.bind((interface, port))
    print('listening at', sock.getsockname())
    while True:
        data, address = sock.recvfrom(MAX_BYTES)
        if random.random() < 0.5:
            print('Pretending to drop packet from {}'.format(address))
            continue
        text = data.decode('ascii')
        print('The clent at {} says {!r}'.format(address, text))
        message = 'Your data was {} bytes long'.format(len(data))
        sock.sendto(message.encode('ascii'), address)

def client(hostname, port):
    sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    hostname = sys.argv[2]
    # connect方法有多种好处，最直观的在于之后的send及recv方法不需要手动指定ip+port
    # 也可以有效抵御网络攻击，但只适用于一个套接字连接一个服务器情况，多次连接会覆盖设置
    sock.connect((hostname, port))
    print('Client socket name is {}'.format(sock.getsockname()))

    delay = 0.1
    text = 'This is another message.'
    data = text.encode('ascii')
    while True:
        sock.send(data)
        print('Waiting up to {} seconds for a reply'.format(delay))
        sock.settimeout(delay)
        try:
            data = sock.recv(MAX_BYTES)
        except socket.timeout:
            # 超时重新设置delay，当delay大于2时，视为服务器无响应
            delay *= 2
            if delay > 2.0:
                raise RuntimeError('I think the server is down.')
        else:
            break

    print('The server say {!r}'.format(data.decode('ascii')))


if __name__ == "__main__":
    choices = {'client':client, 'server':server}
    parse = argparse.ArgumentParser(description='Send and receive UDP,'
                                                ' pretending packets are often dropped')
    parse.add_argument('role', choices=choices, help='which role to take')
    parse.add_argument('host', help='interface the server listens at;'
                                    'host the clent sends to')
    parse.add_argument('-p', metavar='PORT', type=int, default=1060,help='UDP port (default 1060)')

    args = parse.parse_args()
    function = choices[args.role]
    function(args.host, args.p)

