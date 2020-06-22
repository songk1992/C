Korea = "대한민국"
IT = 'Google을 넘어 세계 강국으로'

print (Korea)
print (IT)

Korea = """아름다운
우리나라
대한민국"""

IT = '''Google을 넘어
세계 강국으로'''

print (Korea)
print (IT)

string = "You call it love"
print (string[0:3])
print (string[:8])
print (string[9:11])
print (string[12:])

y = 2020
m = 12
d = 25
christmas = "Christmas - {0}년도 {1}월 {2}일".format(y, m, d)
print (christmas)

stra = "Korea"
strb = "Japan"

if stra > strb:
    print (stra)   # Korea

print ('www.example.com'.strip('cmowz.')) # 제거, example
print ('   www.example.com'.lstrip()) # 공백제거, www.example.com
print ('http://www.example.com'.startswith('http'))  # 시작, True
print ('www.example.com'.endswith('com')) # 끝, True
print ('i am a boy'.title()) # 첫 자리 대문자, I Am A Boy
print ('you are a girl'.upper()) # 대문자, YOU ARE A GIRL
print ('You Are A Girl'.lower()) # 소문자, you are a girl
print ('http://www.google.com'.find('google')) # 검색, 11(검색위치)
print ('http://www.come.com'.rfind('com')) # 뒤로부터 검색, 16(검색위치)
print ('http://www.A.com'.replace('http', 'https')) #교체, https://www.A.com
print ('Android,iOS,Windows 10 Mobile'.split(',')) # 리스트, ['Android', 'iOS', 'Windows 10 Mobile']
