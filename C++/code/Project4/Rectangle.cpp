#include "Rectangle.h"
#include <iostream>

using namespace std;

// 构造方法
Rectangle::Rectangle(double rectLength,double rectWidth):rectLength(rectLength),rectWidth(rectWidth){  // 初始化列表中的多个成员变量需要用逗号分隔，而不是空格。
	cout << "矩形长:" << rectLength << ",宽:" << rectWidth << endl;
}



// 成员函数
double Rectangle:: getRectLength() const{
	return rectLength;
}



double Rectangle:: getRectWidth() const{
	return rectWidth;
}



void Rectangle:: setRectLength(double longth){

	rectLength=longth;
}



void Rectangle:: setRectWidth(double width){

	rectWidth=width;
}




double Rectangle:: getRectArea() const{
	return rectLength*rectWidth;
}



// 析构方法
Rectangle::~Rectangle(){
	cout << "销毁矩形" << endl;
}


