## pandas

> pandas是一个强大的Python数据分析库，它提供了高效的数据结构和数据分析工具。


#### 核心数据结构

Pandas有两个核心数据结构:

- **Series**： 带标签的一维数组。可以把它想象成Excel中的一列。
- **DataFrame**： 带标签的二维表格数据结构，是最常用的对象。它由行和列组成，类似于Excel的一张表格或SQL数据库中的一个表。

---

### 基本用法

#### 导入Pandas

惯例上，我们使用`pd`作为Pandas的别名。

```python
import pandas as pd
```

#### 创建DataFrame

可以从多种数据源创建DataFrame，例如字典、列表、或直接读取文件。

**从字典创建：**
```python
data = {
    ‘姓名’: [‘张三', ‘李四', ‘王五'],
    ‘年龄': [25, 30, 35],
    ‘城市': [‘北京', ‘上海', ‘广州']
}
df = pd.DataFrame(data)
print(df)
```

输出：
```
   姓名  年龄  城市
0  张三  25  北京
1  李四  30  上海
2  王五  35  广州
```

#### 读取数据

这是Pandas最常用的功能之一，可以从CSV、Excel、JSON等文件读取数据。

```python
# 从CSV文件读取
df = pd.read_csv(‘data.csv’)

# 从Excel文件读取
df = pd.read_excel(‘data.xlsx’)
```

#### 查看数据

在分析之前，先快速查看一下数据。

```python
df.head()       # 查看前5行
df.tail(3)      # 查看后3行
df.info()       # 查看数据基本信息（行数、列数、数据类型等）
df.describe()   # 生成描述性统计信息（计数、均值、标准差等，仅对数值列）
df.shape        # 查看数据维度（行数， 列数）
```

#### 选择数据

选择数据是数据分析中的核心操作。

**选择列：**
```python
# 选择单列，返回一个Series
姓名列 = df[‘姓名’]

# 选择多列，返回一个DataFrame
子集 = df[[‘姓名’, ‘年龄’]]
```

**选择行：**
```python
# 通过行索引标签（默认是0,1,2...）
第一行 = df.loc[0]

# 通过行位置（整数索引）
前两行 = df.iloc[0:2]

# 布尔索引（非常强大！）
北京的员工 = df[df[‘城市'] == ‘北京']  # 筛选出城市为“北京”的所有行
年轻人 = df[df[‘年龄'] < 30]          # 筛选出年龄小于30岁的所有行
```

#### 处理缺失值

真实数据中经常存在缺失值（显示为`NaN`）。

```python
# 检查每列的缺失值数量
df.isnull().sum()

# 删除包含缺失值的行
df_dropped = df.dropna()

# 用特定值填充缺失值，例如用均值填充年龄列
df_filled = df.fillna({‘年龄': df[‘年龄'].mean()})
```

#### 数据操作

**新增列：**
```python
df[‘年薪’] = df[‘月薪'] * 12
```

**分组聚合：**
类似于SQL中的`GROUP BY`。
```python
# 按城市分组，并计算每个城市的平均年龄
城市平均年龄 = df.groupby(‘城市’)[‘年龄'].mean()
```

**排序：**
```python
# 按年龄降序排序
df_sorted = df.sort_values(‘年龄', ascending=False)
```

#### 基本统计

Pandas可以轻松进行各种统计计算。

```python
df[‘年龄'].mean()   # 平均年龄
df[‘年龄'].max()    # 最大年龄
df[‘年龄'].min()    # 最小年龄
df[‘年龄'].std()    # 年龄的标准差
df[‘城市'].value_counts() # 每个城市出现的次数
```


