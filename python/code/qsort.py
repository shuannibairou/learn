def quickSort(a:list,r:int,l:int):
    i=r
    j=l
    if i>=j:
        return a
    key=a[i]
    while i<j:
        while i<j and a[j]>=key: # j向前搜索，找到第一个比key小的元素
            j-=1
        a[i]=a[j]  # 采用了挖坑填数法
        while i<j and a[i]<=key: # i向后搜索，找到第一个比key大的元素
            i+=1
        a[j]=a[i]  # 采用了挖坑填数法
    a[i]=key
    quickSort(a,r,i-1)

    quickSort(a,j+1,l)

a=[59,12,77,64,72,69,46,89,31,9]
quickSort(a,0,len(a)-1)
print(a)