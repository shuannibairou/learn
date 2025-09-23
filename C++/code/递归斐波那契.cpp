#include <iostream>
/* 头文件 */
using namespace std;
int fib(int n){
	// 基准情况
	if(n==1 || n==2)
		return 1;
	return fib(n-1)+fib(n-2);
}
int main(){
	cout << fib(9)  << endl;  // 34 
    return 0;
}