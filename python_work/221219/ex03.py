class person:
    arm = 2
    leg = 2
    eyes = 2
    name = ""
    def setname(self,name):
        self.name = name

    def print(self):
        print(f"{self.name} 팔 = {self.arm}개 \
다리 = {self.leg} 개 눈 = {self.eyes} 개")

박길동 = person()
박길동.setname("박길동")
박길동.print()

이길동 = person()
이길동.setname("이길동")
이길동.print()