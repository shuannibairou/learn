

> openpyxl 是一个用于读写 Excel 2010 xlsx/xlsm/xltx/xltm 文件的 Python 库。


## 基本用法

### 1. 创建工作簿和工作表

```python
from openpyxl import Workbook

# 创建工作簿
wb = Workbook()

# 获取活动工作表（默认创建的第一个工作表）
ws = wb.active

# 设置工作表标题
ws.title = "我的工作表"

# 创建新的工作表
ws1 = wb.create_sheet("第二个工作表")  # 插入到最后
ws2 = wb.create_sheet("第三个工作表", 0)  # 插入到第一个位置

# 保存工作簿
wb.save("示例.xlsx")
```

### 2. 操作单元格

```python
# 直接通过坐标赋值
ws['A1'] = "姓名"
ws['B1'] = "年龄"

# 使用 cell() 方法
ws.cell(row=2, column=1, value="张三")
ws.cell(row=2, column=2, value=25)

# 使用行列索引
for row in range(3, 6):
    ws.cell(row=row, column=1, value=f"用户{row-1}")
    ws.cell(row=row, column=2, value=20+row)

# 读取单元格值
print(ws['A1'].value)  # 输出: 姓名
print(ws.cell(2, 1).value)  # 输出: 张三
```

### 3. 批量操作

```python
# 批量写入数据
data = [
    ["产品", "价格", "数量"],
    ["苹果", 5.0, 10],
    ["香蕉", 3.0, 15],
    ["橙子", 4.0, 8]
]

for row in data:
    ws.append(row)

# 读取多行数据
for row in ws.iter_rows(min_row=1, max_row=4, values_only=True):
    print(row)
```

### 4. 读取现有 Excel 文件

```python
from openpyxl import load_workbook

# 加载现有工作簿
wb = load_workbook('示例.xlsx')

# 获取工作表
ws = wb.active

# 或者通过名称获取工作表
# ws = wb["我的工作表"]

# 读取所有数据
for row in ws.iter_rows(values_only=True):
    print(row)
```

### 5. 常用操作

```python
# 获取最大行和列
max_row = ws.max_row
max_col = ws.max_column
print(f"最大行: {max_row}, 最大列: {max_col}")

# 获取单元格范围
cell_range = ws['A1':'C4']
for row in cell_range:
    for cell in row:
        print(cell.value)

# 设置单元格样式
from openpyxl.styles import Font, Alignment

# 设置字体
ws['A1'].font = Font(bold=True, size=14, color="FF0000")

# 设置对齐方式
ws['A1'].alignment = Alignment(horizontal="center")

# 合并单元格
ws.merge_cells('A1:C1')
```

### 6. 公式计算

```python
# 设置公式
ws['D2'] = "=B2*C2"  # 价格 × 数量

# 复制公式到其他单元格
for row in range(3, 6):
    ws[f'D{row}'] = f"=B{row}*C{row}"
```

### 7. 完整示例

```python
from openpyxl import Workbook
from openpyxl.styles import Font, Alignment

# 创建工作簿
wb = Workbook()
ws = wb.active
ws.title = "销售报表"

# 设置表头
headers = ["产品", "单价", "数量", "总价"]
for col, header in enumerate(headers, 1):
    cell = ws.cell(1, col, header)
    cell.font = Font(bold=True)
    cell.alignment = Alignment(horizontal="center")

# 添加数据
data = [
    ["苹果", 5.0, 10],
    ["香蕉", 3.0, 15],
    ["橙子", 4.0, 8],
    ["梨", 6.0, 12]
]

for row, item in enumerate(data, 2):
    for col, value in enumerate(item, 1):
        ws.cell(row, col, value)
    # 计算总价
    ws.cell(row, 4, f"=B{row}*C{row}")

# 保存文件
wb.save("销售报表.xlsx")
print("Excel 文件创建成功！")
```
