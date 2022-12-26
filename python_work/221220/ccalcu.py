from calcu import Calculator

class CCalculator(Calculator):
    
    def mod(self):
        return self.first % self.second

    def div(self):
        if self.second == 0:
            return "나눌수 없습니다"
        else :
            return self.first / self.second