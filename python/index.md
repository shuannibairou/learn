== 2025/09/23 周二 ==

#### [上机作业1](./code/上机作业1.py)

== 2025/09/28 周日 ==

#### 四舍五入

```python
e, f, g, h = -0.35, -0.351, -0.45, -0.451

print("round() 函数（银行家舍入）:")
print(round(e, 1))  # -0.4（向最近的偶数舍入）
print(round(f, 1))  # -0.4
print(round(g, 1))  # -0.4（向最近的偶数舍入）
print(round(h, 1))  # -0.5

print("\n格式化输出（四舍五入到远离零）:")
print(f"{e:.1f}")  # -0.3
print(f"{f:.1f}")  # -0.4  
print(f"{g:.1f}")  # -0.5
print(f"{h:.1f}")  # -0.5
```



== 2025/09/28 周日 ==

#### [上机作业2](./code/上机作业2.py)


== 2025/09/30 周二 ==

#### [上机作业3](./code/上机作业3.py)


== 2025/10/03 周五 ==

#### 认识库

[json](note/standard_lib/json.md)

[openpyxl](./note/extend_lib/openpyxl.md)

[time](note/standard_lib/time.md)

[pandas](./note/extend_lib/pandas.md)

== 10/05/25 Sun ==

#### 看书笔记

* 组合数据类型：列表(list),元组(tuple),字符串(str),字节序列(bytes),字典(dict)，集合(set)
* `lst=[1,2,3]`,反转列表:1.切片,`lst=lst[::-1]`,2.`lst.reverse()`
* 为列表添加元素:`lst.append(x)`,为列表删除元素:`lst.pop([i])`

#### [自学第六章输入，输出和文件](./code/book6)

* 非局部语句**`nonlocal`** 
  * 在嵌套函数中如果要为上级函数体的**局部变量**赋值，使用`nonlocal`声明


== 10/14/25 Tue ==

#### [上机作业4](./code/上机作业4.py)

== 10/21/25 Tue ==
#### [上机作业5](./code/上机作业5.py)