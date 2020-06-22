import socket

print ('파이썬 TCP/IP 서버 프로그래밍')

HOST = '127.0.0.1'
PORT = 10000

server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server.bind( (HOST, PORT) )  # 튜플임에 주의
server.listen(1)

print ('클라이언트 접속 대기 중...')
client, ipinfo = server.accept()       # 클라이언트 접속 대기

print ('클라이언트 접속됨: ', ipinfo)

buff = client.recv(4096)   # 4K

print ('데이타 수신: ', repr(buff))

client.close()
server.close()
