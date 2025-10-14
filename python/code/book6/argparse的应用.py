import argparse
# 创建对象
obj_p=argparse.ArgumentParser()

obj_p.add_argument("--length",type=int,default=10,help="长度")
obj_p.add_argument("--width",type=int,default=5,help="宽度")

args=obj_p.parse_args()
area=args.length*args.width
print("面积：",area)