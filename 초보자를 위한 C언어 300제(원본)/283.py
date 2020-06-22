def print_star(*star):
    for  star_num  in  star:
        for num in range(0, star_num, 1):
            print ('*', end='')
        print ( '' )

print_star(1, 2, 3)
print_star(1, 3, 5, 7, 9)

