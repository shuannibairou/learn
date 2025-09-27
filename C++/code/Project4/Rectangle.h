#pragma once

class Rectangle{

	private:
		double rectLength;
		double rectWidth;  // 私有成员变量
	public:
		// 构造方法
		Rectangle(double,double);
		// 成员函数
		double getRectLength() const;
		double getRectWidth() const;
		void setRectLength(double);
		void setRectWidth(double);

		double getRectArea() const;
		// 析构方法
		~Rectangle();

};