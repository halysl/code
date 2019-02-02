# -*- coding = utf-8 -*-

import os
import time

#1/设置需要备份的文件
source = ['/home/light/Documents/code','/home/light/PycharmProjects']

#2/设置备份的目录
target_dir = '/home/light/Documents/Backup'

cp_dir = '/media/light/Seagate\ Backup\ Plus\ Drive/'

#3/若备份目录不存在，则创建
if not os.path.exists(target_dir):
	os.mkdir(target_dir)

#4/将备份文件打包成Zip文件
# 并将当前日期作为主备份目录下的子目录名称
today = target_dir + os.sep + time.strftime('%Y%m%d')
now = time.strftime("%H%M%S")

#Zip备份文件
target = today + os.sep + now + '.zip'

if not os.path.exists(today):
	os.mkdir(today)
	print('Successfully created directory ',today)

#备份指令，之后用os.system(指令)执行
zip_command = 'zip -r {0} {1}'.format(target, ' '.join(source))

#备份
print('Zip command is:')
print(zip_command)
print('Running:')
if os.system(zip_command) == 0:
	print('Successfully backup to ', target)
else:
	print('Backup FAILED')

cp_command = 'sudo cp {0} {1}'.format(target, cp_dir)
print('copy to backup disk now:')
print(cp_command)
print('Running')
if os.system(cp_command) == 0:
	print('Successfully backup to disk.')
else:
	print('Failed it.')