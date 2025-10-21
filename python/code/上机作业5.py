# P154(11)
print("P154(11)".center(50,"-"))
with open("class_score.txt","r",encoding="utf-8") as f:
    # 求这个班语文数学的平局分
    book=f.read()
    l1=[]
    l1=book.split("\n")
    chinese=0
    math=0
    for i in l1:
        l2=i.split(",")
        
        chinese+=int(l2[1])
        math+=int(l2[2])
    print(f"语文的平均分：{round(chinese/len(l1),1)}")
    print(f"数学的平均分：{round(math/len(l1),1)}")
    # 找出两门课都不及格(<60)的学生，输出：学号，语文成绩，数学成绩
    print("两门课都不及格学生信息如下：")
    for i in l1:
        l2=i.split(",")
        
        if int(l2[1])<60 and int(l2[2])<60:
            for j in l2:
                print(j,end=" ")
            print()
    print("两门课平均分在90分以上的学生信息如下:")
    for i in l1:
        l2=i.split(",")
        avg=(int(l2[1])+int(l2[2]))/2
        if avg>=90:
            for j in l2:
                print(j,end=" ")
            print(avg,end=" ")
            print()
            
        
# p197(2)

print("p197(2)".center(50,"-"))
# 递归求n的阶乘
def recurtion(n:int)->int:
    if n==1:
        return 1
    return n*recurtion(n-1)

n=int(input("n="))

# 非递归求n的阶乘
target=1
for i in range(1,n+1):
    target*=i

print(f"递归: {n}!={target}")
print(f"非递归: {n}!={recurtion(n)}")

# p198(3)

print("p198(3)".center(50,"-"))
def fib(n:int)->int:
    if n==1 or n==2:
        return 1
    return fib(n-1)+fib(n-2)
for i in range(1,21):
    if i==11:
        print()
    print(f"{fib(i):-5}",end="")


"""运行结果:
---------------------P154(11)---------------------
语文的平均分：67.8
数学的平均分：65.6
两门课都不及格学生信息如下：
230208001 47 45
230208003 55 46
230208021 54 48
230208022 50 46
230208029 54 59
230208032 55 53
两门课平均分在90分以上的学生信息如下:
230208034 85 99 92.0
230208042 92 96 94.0
---------------------p197(2)----------------------
n=5
递归: 5!=120
非递归: 5!=120
---------------------p198(3)----------------------
    1    1    2    3    5    8   13   21   34   55
   89  144  233  377  610  987 1597 2584 4181 6765
"""