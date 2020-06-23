import struct

try:
    file = open("x.bin", 'rb')

    buff = file.read(4)
    print (buff)
    tuple_unpack = struct.unpack('i', buff)
    print (tuple_unpack[0])

    buff = file.read(4)
    tuple_unpack = struct.unpack('f', buff)
    print (tuple_unpack[0])

    buff = file.read(5)
    print (buff)
    tuple_unpack = struct.unpack('5s', buff)
    print (tuple_unpack[0])
    print (tuple_unpack[0].decode())

    buff = file.read(3)
    tuple_unpack = struct.unpack('3s', buff)
    print (tuple_unpack[0].decode(encoding='utf-8'))

    file.close()
except:
    print ("파일을 열 수 없습니다.")
    
