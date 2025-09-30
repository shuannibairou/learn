# P89(11)韩信点兵
print("韩信点兵".center(40,"*"))

print("0-1000用3除余2，用5除余3，用7除余2的数有：")

# 一定不会是3，5，7的倍数
for i in range(1000):
    # if i%3==0 and i%5==0 and i%7==0:
    #     continue
    if i%3==2 and i%5==3 and i%7==2:
        print(i,end=" ")
print()



# P127(2)
print("统计字符".center(40,"*"))

# 判断是否是字母的函数
def is_letter(l):
    if ('a'<=l and 'z'>=l) or ('A'<=l and 'Z'>=l):
        return True
    return False
def is_number(n):
    temp=ord(n)-ord('0')
    if temp >=0 and temp<=9:
        return True
    return False
str2=input("请输入字符串:")
# 初始化
count0=len(str2)  # 所有字符的总数
count1=0  # 英文字母出现的次数
count2=0  # 数字出现的次数
count3=0  # 空格出现的次数
count4=0  # 其他字符出现的次数
# 遍历
for i in str2:
    if is_letter(i):
        count1+=1
    if is_number(i):
        count2+=1
    if i==" ":
        count3+=1

count4=count0-count1-count2-count3
    
print("所有字符的总数为：",count0)
print("英文字母出现的次数:",count1)
print("数字出现的次数:",count2)
print("空格出现的次数:",count3)
print("其他字符出现的次数:",count4)

# P128(4)
# 列表元素去重
print("列表元素去重".center(40,"*"))
str4=[11,22,11]
print(str4)
t1 = set(str4)
str4.clear()
for i in t1:
    str4.append(i)
print(str4)
# P128(5)
# 求列表中元素个数，最大值，最小值，元素之和，平均值
print("求列表中元素个数，最大值，最小值，元素之和，平均值".center(40,"*"))
str5=[9,7,8,3,2,1,55,6]
print("元素个数",len(str5))
print("最大值",max(str5))
print("最小值",min(str5))
print("元素之和",sum(str5))
print("平均值",sum(str5)/len(str5))


# P128(9)
# 提取列表中数据放入字典中
print("提取数据".center(40,"*"))
    
studs=[{"sid":'103',"Chinese":90,"Math":95,"English":92},
       {"sid":'101',"Chinese":80,"Math":85,"English":82},
       {"sid":'102',"Chinese":70,"Math":75,"English":72}]
scores=dict()
for i in studs: # 提取数据到scores字典,并将sid的值作为key,各科的成绩放入列表一起作为value
    lst9=[]
    lst9.append(i["Chinese"])
    lst9.append(i["Math"])
    lst9.append(i["English"])
    scores[i["sid"]]=lst9
lst_sort=[]
for k in scores.keys():
    lst_sort.append(int(k))
lst_sort.sort()  # 对学号排序
for k in lst_sort:
    print(k,":",scores[str(k)])

"""
******************韩信点兵******************
0-1000用3除余2，用5除余3，用7除余2的数有：
23 128 233 338 443 548 653 758 863 968
******************统计字符******************
请输入字符串:zjl love python3,greeting!!!
所有字符的总数为： 28
英文字母出现的次数: 21
数字出现的次数: 1
空格出现的次数: 2
其他字符出现的次数: 4
*****************列表元素去重*****************
[11, 22, 11]
[11, 22]
*******求列表中元素个数，最大值，最小值，元素之和，平均值********
元素个数 8
最大值 55
最小值 1
元素之和 91
平均值 11.375
******************提取数据******************
101 : [80, 85, 82]
102 : [70, 75, 72]
103 : [90, 95, 92]
"""