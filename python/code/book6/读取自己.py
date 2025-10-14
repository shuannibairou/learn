import sys
filename=sys.argv[0]
f=open(filename,"r",encoding='utf-8')
online=0
while True:
    online+=1
    line=f.readline()
    if line:
        print(online,":",line)
    else:
        break
f.close()