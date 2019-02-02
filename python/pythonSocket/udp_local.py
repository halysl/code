# -*- coding: utf-8 -*-
# @Date    : 2018-05-16 16:10:54
# @Author  : Light (halysl0817@gmail.com)
# @Link    : ${link}
# @Version : $Id$

import argparse
import socket
from datetime import datetime

# 最大字节数
MAX_BYTES = 65535

# 服务端
def server(port):
    # SOCK_DGRAM代表是udp协议
    sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    # 绑定主机、端口
    sock.bind(('127.0.0.1', port))
    print('Listening at {}'.format(sock.getsockname()))
    
    # 循环，等待客户端的访问，获取进行访问的客户端的数据并输出
    while True:
        data, address = sock.recvfrom(MAX_BYTES)
        text = data.decode('ascii')
        print('The client at {} says {!r}'.format(address, text))
        text = 'Your data was {} bytes long'.format(len(data))
        data = text.encode('ascii')
        sock.sendto(data, address)

# 客户端
def client(port):
    # SOCK_DGRAM代表udp协议
    sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    # 获取当前时间
    text = 'The time is {}'.format(datetime.now())
    data = text.encode('ascii')
    # 传递给服务端当前时间
    sock.sendto(data, ('127.0.0.1', port))
    print('The OS assigned me the address {}'.format(sock.getsockname()))
    data, address = sock.recvfrom(MAX_BYTES)
    text = data.decode('ascii')
    print('The server {} replied {!r}'.format(address,text))


if __name__ == "__main__":
    # 构造命令行参数
    choices = {'client':client, 'server':server}
    parse = argparse.ArgumentParser(description='Send and receive UDP locally')
    parse.add_argument('role', choices=choices, help='which role to play')
    parse.add_argument('-p', metavar='PORT', type=int, default=1060,help='UDP port (default 1060)')

    args = parse.parse_args()
    function = choices[args.role]
    function(args.p)
