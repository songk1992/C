import smtplib

fromaddr = 'eunchol71@naver.com'
toaddrs  = 'ceo@k2apps.kr'

msg = ("From: %s\r\nTo: %s\r\n\r\n"
       % (fromaddr, ", ".join(toaddrs)))
msg = msg + 'test mail'

server = smtplib.SMTP('localhost')
#server.set_debuglevel(1)
server.sendmail(fromaddr, toaddrs, msg)
server.quit()
