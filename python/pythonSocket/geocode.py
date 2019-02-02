# -*- coding:utf-8 -*-

# api-key:AIzaSyBAoeY0LSz_vBlME4edrbxR07vOIQeeyVo
# https://maps.googleapis.com/maps/api/geocode/json?address=YOUR_ADDRESS&key=YOUR_API_KEY
import requests
from pygeocoder import Geocoder

# 使用Request库主动调取google api来获取数据
def geocode_requests(address):    
    para = {'address':address, 'sensor':'false'}
    base = 'http://maps.googleapis.com/maps/api/geocode/json'
    try:
        r = requests.get(base, params=para)
        print(r.status_code)
        answer = r.json()
        print(answer['results'][0]['geometry']['location'])
    except Exception as e:
        # 出现连接错误
        print(e)

# 使用已封装的geocode库调用数据
def geocode(address):
    print(Geocoder.geocode(address)[0].coordinates)    
    

if __name__ == '__main__':
    geocode('207 N. Definace St, Archbold, OH')
