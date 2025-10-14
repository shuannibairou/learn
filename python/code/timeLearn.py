import time
print(time.time())
t1=time.localtime()
print(type(t1))  # class 'time.struct_time'
print(time.strftime("%Y %m-%d %a",t1))  # 2025 10-03 Fri
print(time.strftime("%Y %m-%d %a"))  # 2025 10-03 Fri
print(time.strftime("%x %X"))  # 10/03/25 19:33:49

