# Calc 클래스 선언
class Calc:
    def __init__(self, begin, end):
        self.begin = begin
        self.end = end
        self.hap = 0

    def sum(self):  # [예제 283]
        for  value in range(self.begin, self.end+1, 1):
            self.hap += value
        return self.hap
    
    def sum_even(self):
        for  value in range(self.begin+1, self.end+1, 2):
            self.hap += value
        return self.hap

# CalcTo 클래스 선언(Calc 클래스 상속)
class CalcTo(Calc):
    def sum(self, to):
        for  value in range(self.begin, to+1, 1):
            self.hap += value
        return self.hap
    
calc = Calc(1, 100)
print (calc.sum())
print (calc.sum_even())

calcto = CalcTo(1, 100)
print (calcto.sum(1000))
