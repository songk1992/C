a = 16
print (a)

bin_a = bin(a)
hex_a = hex(a)

print (bin_a)
print (hex_a)

shift_a = a >> 2
print (shift_a)

shift_a = shift_a << 2
print (shift_a)

a = 255
print (a)
and_a = a & 0b00001010
print (and_a)
print (bin(and_a))

a = 3
or_a = a | 0b1100
print (or_a)
print (bin(or_a))

a = 0b1010
xor_a = a ^ 0b1010
print (xor_a)
print (bin(xor_a))
