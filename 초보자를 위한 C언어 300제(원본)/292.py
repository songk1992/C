# Star 클래스 선언
class Star:
    def __init__(self):           # [예제 288]
        self.star_from = 10
        self.star_to = 0

    def print_reversestar(self):  # [예제 283]
        for  star_num  in  range(self.star_from, self.star_to, -1):
            for num in range(0, star_num, 1):
                print ('*', end='')
            print ( '' )

star = Star()
star.print_reversestar()

