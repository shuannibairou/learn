from openpyxl import Workbook
from random import choice
from string import ascii_letters
wb=Workbook() # 造对象
sh1=wb.active
for i in range(1,11):
    s1=""
    for j in range(5):
        s1+=choice(ascii_letters)
    print(s1)
    sh1.cell(row=i,column=1).value=s1
wb.save("t2.xlsx")



