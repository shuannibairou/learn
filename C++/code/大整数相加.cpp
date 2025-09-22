#include <iostream>

/* 头文件 */
using namespace std;
/* 函数 */
int main(){
	// 竖式加法
    string num1 = "1111111111111111111111111111111111199";
    string num2 = "2222222222222222222222299";
    string result;
    // 定义两个指针,指向两个数的个位
    int ptr1 = num1.size()-1;
    int ptr2 = num2.size()-1;
    // 保存进位
    int carry = 0;
    // 从低位开始遍历,获得每一位
	while(ptr1 >= 0 || ptr2 >= 0 || carry != 0){
		// 判断数据是否遍历完成,如果完成则补0
		int x = (ptr1 >= 0) ? (num1[ptr1]-'0') : 0;
		int y = (ptr2 >= 0) ? (num2[ptr2]-'0') : 0;
		int sum = x+y+carry;
		carry=sum/10;
		// 字符串的拼接
		result += (sum%10+'0');
		// 指针向前移动
		--ptr1;
		--ptr2;


	}
	// 对结果进行反转
	int l=0,r = result.size()-1;
	while(l<r)
	{
		char temp=result[l];
		result[l]=result[r];
		result[r]=temp;
		l++;
		r--;

	}
	cout << num1 << "+"  << num2 << "=" << result  << endl;
    return 0;
}