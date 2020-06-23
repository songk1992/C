import time
import datetime
import calendar

today = datetime.date.today()
print (today)

today = datetime.datetime.now()
print (today)

mydatetime = datetime.datetime( 2020, 12, 25, 18, 0, 0 )
print (mydatetime)
print (mydatetime.weekday())

mydate = datetime.date( 2020, 12, 24 )
print (mydate)

mytime = datetime.time( 18, 30, 25 )
print (mytime)

today = time.time()
print (today)

localtime = time.localtime( time.time() )
print (localtime)
print (localtime.tm_year)    # 연
print (localtime.tm_mon)     # 월
print (localtime.tm_mday)    # 일
print (localtime.tm_hour)    # 시
print (localtime.tm_min)     # 분
print (localtime.tm_sec)     # 초
print (localtime.tm_wday)    # 요일

mycalendar = calendar.month(2020, 12)
print (mycalendar)
