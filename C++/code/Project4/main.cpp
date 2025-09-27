#include "Rectangle.h"
#include <iostream>

using namespace std;

int main(){

	// 造对象
	Rectangle rect1(10,20);
	cout << "矩形长" << rect1.getRectLength() << endl;
	cout << "矩形宽" << rect1.getRectWidth() << endl;
	cout << "修改前矩形面积" << rect1.getRectArea() << endl;
	// 修改对象的成员
	rect1.setRectLength(30);
	rect1.setRectWidth(15);
	cout << "矩形长" << rect1.getRectLength() << endl;
	cout << "矩形宽" << rect1.getRectWidth() << endl;
	cout << "修改后矩形面积" << rect1.getRectArea() << endl;

	cin.get();
	return 0;
}