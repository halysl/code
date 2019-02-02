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

color_R = 255
color_G = 255
color_B = 0

while True:
    for event in pygame.event.get():
        if event.type in (QUIT,KEYDOWN):
            sys.exit()

    screen.fill((0,0,200))

    rand = random.random()
    print(rand)

    

    pos_x += vel_x*rand*2
    pos_y += vel_y*rand*2
    #超出屏幕范围时翻转移动方向，并利用random方法变换颜色
    if pos_x>500 or pos_x<0:
        vel_x = -vel_x
        color_R = 255*random.random()
        color_G = 255*random.random()
        color_B = 255*random.random()
    if pos_y>400 or pos_x<0:
        vel_y = -vel_y
        color_R = 255*random.random()
        color_G = 255*random.random()
        color_B = 255*random.random()
    
    color = color_R,color_G,color_B
    width = 0
    pos = pos_x,pos_y,100,100
    pygame.draw.rect(screen, color, pos, width)

    pygame.display.update()