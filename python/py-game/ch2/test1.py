# -*- coding:utf-8 -*-
import pygame
from pygame.locals import *
import sys
#初始化pygame
pygame.init() 
#设置一个窗口，设置字体，设置窗口标题
screen = pygame.display.set_mode((600,500))
myfont = pygame.font.Font(None,60)
pygame.display.set_caption("draw text")
#定义两个颜色的RGB值（元组类型），渲染一段文本放入textImage对象中，
#render方法三个参数，文字、是否抗锯齿、颜色
white = 255,255,255
blue = 0,0,255
textImage = myfont.render("hello pygame", True, white)
#循环
while True:
    #检测条件，当点了了关闭按钮或者按下任意按键，则关闭程序
    for event in pygame.event.get():
        if event.type in (QUIT,KEYDOWN):
            sys.exit()
    #屏幕填充颜色，屏幕绘制方法，显示更新方法
    screen.fill(blue)
    screen.blit(textImage,(100,100))
    pygame.display.update()