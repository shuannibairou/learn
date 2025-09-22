#include <iostream>
/* 头文件 */
using namespace std;
// 求n阶层的函数
int section(int n){
	int result=1;
	for (int i = 1; i <= n; ++i)
	{
		result *= i;
	}
	return result;
}

// 能用递归
// int section(int n){
// 	if(n==1)
// 		return 1;
// 	return n*section(n-1);
// }
int main(){
    int a = 5;
    int result = section(a);
    cout << a << "的阶层是:" << result  << endl;
    return 0;
}