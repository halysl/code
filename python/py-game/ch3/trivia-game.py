# -*- coding:utf-8 -*-

import sys
import pygame
from pygame.locals import *

# 定义一个trivia类
class Trivia(object):
    # 定义一些数据结构以及布尔变量表示状态
    def __init__(self, filename):
        self.data = []
        self.current = 0
        self.total = 0
        self.correct = 0
        self.score = 0
        self.scored = False
        self.failed = False
        self.wronganswer = 0
        self.colors = [white,white,white,white]
        self.filename = filename

    # 从文本文件中获得数据
    def get_data(self):
        f = open(self.filename,"r")
        trivia_data = f.readlines()        
        f.close()

        for text_line in trivia_data:            
            self.data.append(text_line.strip().decode('utf-8'))
            self.total += 1 

    # 问题的展示部分
    def show_question(self):
        print_text(font1,210,5,"Trivia Game")
        print_text(font2,190,500-20,"Press Keys (1-4) To Answer",purple)
        print_text(font2,530,5,"Score",purple)
        print_text(font2,550,25,str(self.score),purple)

        self.correct = int(self.data[self.current+5])

        question = self.current
        print_text(font1,5,80,"Question")
        print_text(font2,20,120,self.data[self.current],yellow)

        # 根据hadle_input()获得的scored和failed状态更新显示状态
        if self.scored:
            self.colors = [white,white,white,white]
            self.colors[self.correct-1] = green
            print_text(font1,230,380,"CORRECT!",green)
            print_text(font2,170,420,"Press Enter For Next Question",green)
        elif self.failed:
            self.colors = [white,white,white,white]
            self.colors[self.wronganswer-1] = red
            self.colors[self.correct-1] = green
            print_text(font1,230,380,"INCORRECT!",red)
            print_text(font2,170,420,"Press Enter For Next Question",red)
        print_text(font1,5,170,"Answer")
        print_text(font2,20,210,"1-"+self.data[self.current+1],self.colors[0])
        print_text(font2,20,240,"2-"+self.data[self.current+2],self.colors[1])
        print_text(font2,20,270,"3-"+self.data[self.current+3],self.colors[2])
        print_text(font2,20,300,"4-"+self.data[self.current+4],self.colors[3])

    # 根据输入值确定scored和failed的状态
    def hadle_input(self,number):
        if not self.scored and not self.failed:
            if number == self.correct:
                self.scored = True
                self.score += 1
            else:
                self.failed = True
                self.wronganswer = number

    # 跳转到下个问题
    def next_question(self):
        if self.scored or self.failed:
            self.scored = False
            self.failed = False
            self.correct = 0
            self.colors = [white,white,white,white]
            self.current += 6
            if self.current >= self.total:
                self.current = 0

# 定义一个新的print_text()方法，接收字体信息，位置信息，文本信息，颜色信息，抗锯齿信息
def print_text(font,x,y,text,color=(255,255,255),shadow=True):
    if shadow:
        imgtext = font.render(text,True,(0,0,0))
        screen.blit(imgtext,(x-2,y-2))
    imgtext = font.render(text,False,color)
    screen.blit(imgtext,(x,y))


# 初始化pygame
pygame.init()
# 设置窗口和窗口标题
screen = pygame.display.set_mode((600,500))
pygame.display.set_caption("关于他")
# 设置两个字体
font1 = pygame.font.SysFont("思源黑体",40)
font2 = pygame.font.SysFont("思源黑体",24)
# 定义若干种颜色的RGB值
white = 255,255,255
cyan = 0,255,255
yellow = 255,255,0
purple = 255,0,255
green = 0,255,0
red = 255,0,0
# 创建trivia对象，并读入question.txt文件
trivia = Trivia("question.txt")
trivia.get_data()
# loop
while True:
    for event in pygame.event.get():
        if event.type == QUIT:
            sys.exit()
        # 根据按键事件，确定不同的操作
        elif event.type == KEYUP:
            if event.key == pygame.K_ESCAPE:
                sys.exit()
            elif event.key == pygame.K_1:
                trivia.hadle_input(1)
            elif event.key == pygame.K_2:
                trivia.hadle_input(2)
            elif event.key == pygame.K_3:
                trivia.hadle_input(3)
            elif event.key == pygame.K_4:
                trivia.hadle_input(4)
            elif event.key == pygame.K_RETURN:
                trivia.next_question()

    screen.fill((0,0,200))

    trivia.show_question()

    pygame.display.update()