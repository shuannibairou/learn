n=3 # 一次写入三行
f=open("file.txt","w",encoding="utf-8")
for i in range(n):
    f.write(f"第{i+1}行：world\n")
f.close()


f=open("file.txt","r",encoding="utf-8")
r=f.read()
print(r)
f.close()

with open("file.txt",'r',encoding='utf-8') as file:
    for line in file:
        print(line.strip("\n"))