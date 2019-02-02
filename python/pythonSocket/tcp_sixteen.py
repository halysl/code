# -*- coding: utf-8 -*-
# @Date    : 2018-05-20 08:33:23
# @Author  : Light (halysl0817@gmail.com)
# @Link    : ${link}
# @Version : $Id$

import argparse
import socket

# 接收数据
def recvall(sock, length):
    data = b''
    while len(data) < length:
        more = sock.recv(length-len(data))
        if not more:
            raise EOFError('was expecting %d bytes but only received'
                           ' %d bytes before the socket closed'
                           %(length, len(data)))
        data += more
    return data

def server(interface, port):
    # AF_INET 代表ipv4，STREAM 代表TCP
    sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    sock.setsockopt(socket.SOL_SOCKET, socket.SOCK_REUSEADDR, 1)
    sock.bind((interface, port))
    sock.listen(1)
    print('Listening at:', sock.getsockname())
    while True:
        sc, sockname = sock.accept()
        print('We have accepted a connection from', sockname)
        print(' Socket name:', sc.getsockname())
        print(' Socket peer:', sc.getpeername())
        message = recvall(sc, 16)
        print(' Incoming sixteen-octet message:',repr(message))
        sc.sendall(b'Farewell, cllllient')
        sc.close()
        print(' Reply sent, socket closed')

def client(host, port):
    sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    sock.connecet((host, port))
    print('Client has been assigned socket name', sock.getsockname())
    sock.sendall(b'Hi there, server')
    reply = recvall(sock, 16)
    print('The server said:', repr(reply))
    sock.close()


if __name__ == '__main__':
    choices = {'client':client, 'server':server}
    parse = argparse.ArgumentParser(description='Send and receive over TCP')
    parse.add_argument('role', choices=choices, help='which role to play')
    parse.add_argument('host', help='interface the server listens at   ;'
                                    'host the clent sends to')
    parse.add_argument('-p', metavar='PORT', type=int, default=1060,
                       help='UDP port (default 1060)')
    args = parse.parse_args()
    function = choices[args.role]
    function(args.host, args.p)