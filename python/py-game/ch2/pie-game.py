# -*- coding:utf-8 -*-

import sys
import math
import pygame
from pygame.locals import *

pygame.init()
# 初始化窗口、主题、字体
screen = pygame.display.set_mode((600,500))
pygame.display.set_caption("the pie game-press 1,2,3,4")
myfont = pygame.font.Font(None,60)
# 设置颜色、宽度、中心位置，半径
color = 200,80,60
width = 4
x = 300
y = 250
radius = 200
position = x-radius,y-radius,radius*2,radius*2

# 设置四个布尔变量
pie1 = False
pie2 = False
pie3 = False
pie4 = False

while True:
    # 监测事件
    for event in pygame.event.get():
        # 当事件为“退出程序”
        if event.type == QUIT:
            sys.exit()
        # 当事件按键操作时
        elif event.type == KEYUP:
            #escape事件
            if event.key == pygame.K_ESCAPE:
                sys.exit()
            #分别对应1\2\3\4，改变那四个布尔变量的值
            elif event.key == pygame.K_1:
                pie1 = True
            elif event.key == pygame.K_2:
                pie2 = True
            elif event.key == pygame.K_3:
                pie3 = True
            elif event.key == pygame.K_4:
                pie4 = True

    screen.fill((0,0,200))

    #在这四个位置写上四个数字
    textImg1 = myfont.render("1",True,color)
    screen.blit(textImg1,(x+radius/2-20,y-radius/2))
    textImg2 = myfont.render("2",True,color)
    screen.blit(textImg2,(x-radius/2,y-radius/2))
    textImg3 = myfont.render("3",True,color)
    screen.blit(textImg3,(x-radius/2,y+radius/2-20))
    textImg4 = myfont.render("4",True,color)
    screen.blit(textImg4,(x+radius/2-20,y+radius/2-20))

    # 根据布尔变量确定的操作
    if pie1:
        # 设置初始角度、结束角度、画弧线，画两条线
        start_angle = math.radians(0)
        end_angle = math.radians(90)
        pygame.draw.arc(screen,color,position,start_angle,end_angle,width)
        pygame.draw.line(screen,color,(x,y),(x,y-radius),width)
        pygame.draw.line(screen,color,(x,y),(x+radius,y),width)
    if pie2:
        start_angle = math.radians(90)
        end_angle = math.radians(180)
        pygame.draw.arc(screen,color,position,start_angle,end_angle,width)
        pygame.draw.line(screen,color,(x,y),(x,y-radius),width)
        pygame.draw.line(screen,color,(x,y),(x-radius,y),width)
    if pie3:
        start_angle = math.radians(180)
        end_angle = math.radians(270)
        pygame.draw.arc(screen,color,position,start_angle,end_angle,width)
        pygame.draw.line(screen,color,(x,y),(x-radius,y),width)
        pygame.draw.line(screen,color,(x,y),(x,y+radius),width)
    if pie4:
        start_angle = math.radians(270)
        end_angle = math.radians(360)
        pygame.draw.arc(screen,color,position,start_angle,end_angle,width)
        pygame.draw.line(screen,color,(x,y),(x,y+radius),width)
        pygame.draw.line(screen,color,(x,y),(x+radius,y),width)
    # 当四个布尔变量都为True时，改变颜色
    if pie1 and pie2 and pie3 and pie4:
        color = 0,255,0

    pygame.display.update()
