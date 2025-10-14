import sys
total=0.0  # 数值汇总初值
count=0  # 数值计数初值
for line in sys.stdin:
    count+=1
    total+=float(line)
avg=total/count
print("平均值:",avg)