#-*- coding:utf-8 -*-

import sys
import random
import pygame
from pygame import *

pygame.init()
#设置屏幕
screen = pygame.display.set_mode((600,500))
pygame.display.set_caption("draw rect")
#设置初始位置，以及x、y轴的变化率
pos_x = 300
pos_y = 250
vel_x = 0.2
vel_y = 0.1

while True:
    for event in pygame.event.get():
        if event.type in (QUIT,KEYDOWN):
            sys.exit()

    screen.fill((0,0,200))

    rand = random.random()
    print(rand)


    pos_x += vel_x*rand
    pos_y += vel_y*rand
    #超出屏幕范围时翻转移动方向
    if pos_x>500 or pos_x<0:
        vel_x = -vel_x
    if pos_y>400 or pos_x<0:
        vel_y = -vel_y

    color = 255,255,0
    width = 0
    pos = pos_x,pos_y,100,100
    pygame.draw.rect(screen, color, pos, width)

    pygame.display.update()