# p62(13)
# 利用for和while循环求阶乘
def factorial_for(n:int):
    sum=1
    for i in range(1,n+1):
        sum*=i
    return sum
def factorial_while(n:int):
    sum=1
    i=1
    while(i<=n):
        sum*=i
    return sum
# 合法性判断
def check_input():
    while True:
        n=int(input("n="))
        if n>=0 :
            break
        print("输入非负整数")
    return n


print(factorial_while(check_input()))
print(factorial_for(check_input()))










# # P63(16)
# # 输入三位自然数，提取整数各位上的数字
# # 利用//,%,divmod(),map()。至少三种不同的编程方法


# # 递归
# def my_split1(number):
#     # 基准情况
#     if number==0:
#         return;
#     my_split1(number//10)
#     print(number%10,end=" ")
# def my_split2(number):
#     lst=[]
#     while(number):
#         number,b=divmod(number,10) # a是商，b是余数
#         lst.append(b)
#     for i in reversed(lst):
#         print(i,end=" ")
# def my_split3(number):
#     for i in list(map(int,str(number))):
#         print(i,end=" ")


# number=int(input("输入一个三位的自然数"))
# my_split1(number)
# print()
# my_split2(number)
# print()
# my_split3(number)
# print()









# # P63(18)
# # 自幂数探索
# from math import pow
# def is_armstrong_number(num,digit_count):
#     sum=0
#     num_copy=num
#     while(num_copy):

#         temp:int=num_copy%10    
#         sum+=pow(temp,digit_count)
        
#         num_copy=num_copy//10

#     if(num==sum):
#         return True
#     return False



# n=int(input("请输入自幂数的位数(>=1且<=10):"))
# k=0  # 先将小的自幂数打印,可以先看到效果,防止用户因等待时间太长而不耐烦.
# while(k<=n):

#     i=pow(10,k+1)
#     j=pow(10,k)
#     if(k==0):
#         j=0
#     k+=1

#     while(i>j):
        
#         if(is_armstrong_number(i,k)):
#             print(i,end=" ")
#         i-=1
    
#     print()







# # P87(2)杨辉三角
# print("1".center(20)) # 输出第一行
# lst2=[]
# i=5  # 控制总行数

# k=2  # 开始于第二行
# while k<=i:
    
#     lst1=[1,1]
#     j=1  # 除了1之外的某一行开始有几个数
#     while j<=k-2:
#         x=lst2[j-1]+lst2[j]
#         lst1.insert(j,x)
#         j+=1
#     lst2=lst1.copy()  # 保存上一次的结果,作为下次运算的输入
#     print(" "*(10-k),end="")
#     print(*lst2)
#     k+=1



# # P88(4)三数排序
# import random

# def my_sort(a,b,c):
# 	if (a<b and c<b): # 当b最大
# 		if a<c:
# 			return a,c,b
# 		else:
# 			return c,a,b
# 	elif (b<a and c < a): # 当a最大
# 		if b<c:
# 			return b,c,a
# 		else:
# 			return c,b,a
# 	else:					# 当c最大
# 		if a<b:
# 			return a,b,c
# 		else:
# 			return b,a,c
# # 产生3个1-100(包含0,100)的随机整数
# # 将三个数用至少两种办法从小到大排序
# lst_sort=[]
# for i in range(3):
# 	a= random.randint(0,100)
# 	lst_sort.append(a)

# print("初始值",*lst_sort)
# print("方法一,升序值",*sorted(lst_sort))

# r_max=max(lst_sort)
# l_min=min(lst_sort)
# sum=sum(lst_sort)
# mid=sum-r_max-l_min
# print("方法二,升序值",l_min,mid,r_max)

# print("方法三,升序值",*my_sort(*lst_sort))



# # P88(6)袖珍计算器
# # 输入两个操作数,一个操作符
# x=int(input("操作数x="))
# y=int(input("操作数y="))
# sign=input("输入操作符:")
# is_error=False
# result=0;
# if sign=='+':
# 	result=x+y
# elif sign=='-':
# 	result=x-y
# elif sign=='*':
# 	result=x*y
# elif sign=='/':
# 	if y!=0:
# 		result=x/y
# 	else:
# 		print("分母为0,零除异常")
# 		is_error=True
# elif sign=='%':
# 	result=x%y
# else:
# 	print("输入非法,退出计算机")
# 	is_error=True

# if(not is_error):
# 	print(x,sign,y,'=',result)