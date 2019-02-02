#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Date    : 2018-05-19 11:21:47
# @Author  : Light (halysl0817@gmail.com)
# @Link    : ${link}
# @Version : $Id$

import argparse
import socket

BUFSIZE = 65535


def server(interface, port):
    sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    sock.bind((interface, port))
    print('Listening for datagrams at {}'.format(sock.getsockname()))
    while True:
        data, address = sock.recvfrom(BUFSIZE)
        text = data.decode('ascii')
        print('The client at {} says:{!r}'.format(address, text))


def client(network, port):
    sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    sock.setsockopt(socket.SOL_SOCKET, socket.SO_BROADCAST, 1)
    text = 'Broadcast datagram!'
    sock.sendto(text.encode('ascii'), (network, port))


if __name__ == '__main__':
    choices = {'client': client, 'server': server}
    parse = argparse.ArgumentParser(description='Send, receive UDP broadcast')
    parse.add_argument('role', choices=choices, help='which role to play')
    parse.add_argument('host', help='interface the server listens at;'
                                    'host the clent sends to')
    parse.add_argument('-p', metavar='PORT', type=int, default=1060,
                       help='UDP port (default 1060)')
    args = parse.parse_args()
    function = choices[args.role]
    function(args.host, args.p)
