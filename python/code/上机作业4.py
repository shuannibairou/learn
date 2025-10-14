# P128(6)
print("P128(6)".center(40,"-"))
# 将s中偶数变成其平方，奇数不变
s=[9,7,8,3,2,1,5,6]

for index,item in enumerate(s):
    if item%2==0:
        s[index]=item**2
print(s)

# p128(7)
print("P128(7)".center(40,"-"))
# 字符串转ascii码列表

# s1=input("输入字符串:")
s1="abc"
ascii_ls=[]
for i in s1:
    ascii_ls.append(ord(i))
# 输出ascii码
print(ascii_ls)


# p128(8)
print("P128(8)".center(40,"-"))
# 星期字典输出键值列表
d1={1:"Mon",2:"Tues",3:"Wed",4:"Thur",5:"Fri",6:"Sat",7:"Sun"}
for i in d1:
    print(i,end=" ")
print()
for i in d1.values():
    print(i,end= " ")
print()
for k,v in d1.items():
    print("{",k,",",v,"}",end= " ")
print()

# p129(11)
print("P129(11)".center(40,"-"))
# 用五种方法判断回文字符串
def is_huiwen(f):
    def inner(s):
        if f(s):
            print(f"{s}是回文字符串")
        else:
            print(f"{s}不是是回文字符串")
    return inner

# 方法1: 切片
@is_huiwen
def f1(s):
    ts=s[::-1]
    return ts==s

# 方法2：for循环遍历并逐个比较
@is_huiwen
def f2(s):
    for i in range(len(s)//2):
        if(s[i]!=s[len(s)-i-1]):
            return False
    return True

# 方法3：将字符串转化成list，再用reverse()函数处理
@is_huiwen
def f3(s):
    l=list(s)
    l2=l.copy()
    l.reverse()
    return l==l2
# 方法4: 使用字符串的reversed()将字符串反序
@is_huiwen
def f4(s):
    ts="".join(reversed(s))
    return s==ts
# 方法5: 递归
def my_reverse(s:str)->str:
    if s=="":
        return ""
    return s[-1]+my_reverse(s[:-1])
@is_huiwen
def f5(s):
    ts=my_reverse(s)
    return s==ts
s2="abcba"
s3="zhang"
print("方法1")
f1(s2)
f1(s3)

print("方法2")
f2(s2)
f2(s3)


print("方法3")
f3(s2)
f3(s3)


print("方法4")
f4(s2)
f4(s3)

print("方法5")
f5(s2)
f5(s3)

# p153(7)
print("P153(7)".center(40,"-"))
# 生成随机密码
import random
import string
random.seed('0x1010')

passwd_ls=[]  # 存放所有密码
while len(passwd_ls)<=10:
    passwd=""
    head=[] # 存放所有密码首字母
    code_book=string.ascii_letters+string.digits+"!@#$%^&*"
    for i in range(10):
        passwd+=random.choice(code_book)

    if passwd[0] not in head:
        passwd_ls.append(passwd)
        head.append(passwd[0])

# 永久化保存
with open("password.txt","w",encoding="utf-8") as f:
    for i in passwd_ls:
        f.write(i+"\n")

# print('-'*40)


# p198(5)
print("P198(5)".center(40,"-"))
# 可变参数
def min_n(a,b,*c):
    l=[]
    l.append(a)
    l.append(b)
    l+=list(c)
    return min(l)
print(min_n(2,3,1,4))









# 运行结果
"""
----------------P128(6)-----------------
[9, 7, 64, 3, 4, 1, 5, 36]
----------------P128(7)-----------------
[97, 98, 99]
----------------P128(8)-----------------
1 2 3 4 5 6 7
Mon Tues Wed Thur Fri Sat Sun
{ 1 , Mon } { 2 , Tues } { 3 , Wed } { 4 , Thur } { 5 , Fri } { 6 , Sat } { 7 , Sun }
----------------P129(11)----------------
方法1
abcba是回文字符串
zhang不是是回文字符串
方法2
abcba是回文字符串
zhang不是是回文字符串
方法3
abcba是回文字符串
zhang不是是回文字符串
方法4
abcba是回文字符串
zhang不是是回文字符串
方法5
abcba是回文字符串
zhang不是是回文字符串
----------------P153(7)-----------------
----------------P198(5)-----------------
1
"""