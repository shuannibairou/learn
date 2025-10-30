# 198(4)
# 分别用递归和非递归的方法，实现函数GCD求最大公约数和LCM最小公倍数

def GCD1(x:int,y:int)->int:
    if y==0:
        return x
    return GCD1(y,x%y)
def LCM1(x:int,y:int)->int:
    return x*y//GCD1(x,y)
def GCD2(x:int,y:int)->int:
    while y != 0:
        x,y=y,x%y
    return x

def LCM2(x:int,y:int)->int:
    i=0
    while True:
        i+=1
        if i%x==0 and i%y==0:
            break
    return i
x=int(input("x="))
y=int(input("y="))
print(f"(递归){x}和{y}最大公约数:{GCD1(x,y)},最小公倍数:{LCM1(x,y)}")
print(f"(非递归){x}和{y}最大公约数:{GCD2(x,y)},最小公倍数:{LCM2(x,y)}")
# 230 (2)
# 创建类MyMath，计算圆的周长和面积，及球的表面积和体积(结果保留两位小数)
import math
class MyMath:
    def __init__(self,r) -> None:
        self.r=r
    def get_circle_area(self):
        return 2*math.pi*self.r
    def get_circle_volume(self):
        return math.pi**2*self.r
    def get_sphere_area(self):
        return 4*math.pi*self.r**2
    def get_sphere_volume(self):
        return 4/3*math.pi*self.r**3

c=MyMath(4)
print(f"圆的周长：{c.get_circle_area():0.2f}")
print(f"圆的面积：{c.get_circle_volume():0.2f}")
print(f"球的周长：{c.get_sphere_area():0.2f}")
print(f"球的面积：{c.get_sphere_volume():0.2f}")




"""运行结果
x=4
y=6
(递归)4和6最大公约数:2,最小公倍数:12  
(非递归)4和6最大公约数:2,最小公倍数:12
圆的周长：25.13
圆的面积：39.48
球的周长：201.06
球的面积：268.08
"""
