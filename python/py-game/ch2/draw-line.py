# -*- coding:utf-8 -*-
import pygame
from pygame.locals import *
import sys

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
    point1 = 100,100
    point2 = 500,400
    pygame.draw.line(screen,color,point1,point2,width)

    pygame.display.update()