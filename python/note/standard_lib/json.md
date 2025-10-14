### python To json
```python
import json

# json.dumps() - 将Python对象转换为JSON字符串
data = {
    "name": "张三",
    "age": 25,
    "is_student": False,
    "hobbies": ["读书", "运动"]
}
json_str = json.dumps(data)
print(json_str)  # {"name": "\u5f20\u4e09", "age": 25, "is_student": false, "hobbies": ["\u8bfb\u4e66", "\u8fd0\u52a8"]}

# json.dump() - 将Python对象写入JSON文件
with open('data.json', 'w', encoding='utf-8') as f:
    json.dump(data, f)
```

### json To python
```python
import json

# json.loads() - 将JSON字符串转换为Python对象
json_str = '{"name": "李四", "age": 30, "city": "北京"}'
data = json.loads(json_str)
print(data['name'])  # 李四

# json.load() - 从JSON文件读取数据
with open('data.json', 'r', encoding='utf-8') as f:
    data = json.load(f)
    print(data)
```