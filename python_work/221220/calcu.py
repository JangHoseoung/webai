class Calculator:
    first = 10
    second = 20
    def __init__(self,fi,se):
        self.first = fi
        self.second = se

    def setData(self,fi,se):
        self.first = fi #클래스 함수에는 self 필요
        self.second = se

    def add(self):
        return self.first + self.second
    
    def sub(self):
        return self.first - self.second
    
    def mul(self):
        return self.first * self.second
    
    def div(self):
        return self.first / self.second
