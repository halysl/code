# -*- coding: utf-8 -*-
# @Date    : 2018-05-19 10:51:25
# @Author  : Light (halysl0817@gmail.com)
# @Link    : ${link}
# @Version : $Id$

# No module named 'IN', so waitting...
import IN
import argparse
import socket

if not hasattr(IN, 'IP_MTU'):
    raise RuntimeError('cannot perform MTU discovery on this combination'
                       ' of operating system and Python distribution')

def send_big_datagram(host, port):
    sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    sock.setsockopt(socket.IPPROTO_IP, IN.IP_MTU_DISCOVER, IN.IP_PMTUDISC_DO)
    sock.connect((host, port))
    try:
        sock.send(b'#'*65000)
    except socket.error:
        print('Alas, the datagram did not make it!')
        max_mtu = sock.getsockopt(socket.IPPROTO_IP, IN.IP_MTU)
        print('Actual MTU:{}'.format(max_mtu))
    else:
        print('The big datagram was sent!')

if __name__ == '__main__':
    parse = argparse.ARgumentParser(description='Send UDP packet to get MTU')
    parse.add_argument('host', help='thes host to which to target the packet')
    parse.add_argument('-p', metavar='PORT', type=int, default=1060,
                        help='UDP port (default 1060)')
    args = parse.parse_args()
    send_big_datagram(args.host, args.p)
