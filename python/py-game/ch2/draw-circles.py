# -*- coding:utf-8 -*-
import pygame
from pygame.locals import *
import sys
#初始化pygame
pygame.init() 
#设置一个窗口，设置窗口标题
screen = pygame.display.set_mode((600,500))
pygame.display.set_caption("draw circles")
#循环
while True:
    #检测条件，当点了了关闭按钮或者按下任意按键，则关闭程序
    for event in pygame.event.get():
        if event.type in (QUIT,KEYDOWN):
            sys.exit()
    #屏幕填充颜色
    screen.fill((0,0,200))
    #先为圆设置颜色、位置、半径、宽度
    color = 255,255,0
    position = 300,250
    radius = 100
    width = 15
    #调用draw.circle()方法绘制圆
    pygame.draw.circle(screen,color,position,radius,width)

    pygame.display.update()