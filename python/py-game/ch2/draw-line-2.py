# -*- coding:utf-8 -*-
import pygame
import random
from pygame.locals import *
import sys
import time

pygame.init()

screen = pygame.display.set_mode((600,500))
pygame.display.set_caption("draw line")

while True:
    for event in pygame.event.get():
        if event.type in (QUIT,KEYDOWN):
            sys.exit()

    screen.fill((0,80,0))

    color = 100,255,200
    width = 1
    count = 0
    # 循环1000次，每次利用random函数创建新的线条，并绘制
    while count < 1000:
        p1_x = random.randint(0,600)
        p1_y = random.randint(0,500)
        p2_x = random.randint(0,600)
        p2_y = random.randint(0,500)
        point1 = p1_x,p1_y
        point2 = p2_x,p2_y
        count += 1
    pygame.draw.line(screen,color,point1,point2,width)

    time.sleep(0.5)

    pygame.display.update()