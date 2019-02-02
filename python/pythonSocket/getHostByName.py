# -*- coding: utf-8 -*-
# @Date    : 2018-05-16 13:14:48
# @Author  : Light (halysl0817@gmail.com)
# @Link    : ${link}
# @Version : $Id$

import os
import socket

if __name__ == '__main__':
    hostname = input()
    try:
        addr = socket.gethostbyname(hostname)
        print("the ip address of {} is {}".format(hostname,addr))
    except Exception as e:
        print(e)