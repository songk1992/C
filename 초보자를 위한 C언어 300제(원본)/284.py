file = open("a.txt", 'w')
print (file)

if not (file.closed):
    file.write("아름다운 파이썬\n")
    file.write("우리나라 대한민국\n")
    file.close()
else:
    print ("파일을 열 수 없습니다.")
    
try:
    file = open("d:\\b.txt", 'w')
    file.write("아름다운 파이썬\n")
    file.close()
except:
    print ("파일을 열 수 없습니다.")
    
