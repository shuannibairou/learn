#include <iostream>
/* 头文件 */
using namespace std;
/* 函数 */
int main(){
	const int n =4;
    int arr[n][n]={
    	{5,1,9,11},
    	{2,4,8,10},
    	{13,3,6,7},
    	{15,14,12,16}
    };
    // 1. 矩阵转置
    // 遍历下半个三角
    for (int i = 0; i < n; ++i)
    {
    	for (int j = 0; j <= i; ++j)
    	{
    		// 以对角线为轴,两边元素进行互换
    		int temp = arr[i][j];
    		arr[i][j] = arr[j][i];
    		arr[j][i] = temp;
    	}
    }
    // 2. 对每一行前后翻转
    for (int i = 0; i < n; ++i)
    {
    	int l=0,r=n-1;
	    while(l<r){
	    	int temp = arr[i][l];
	    	arr[i][l] = arr[i][r];
	    	arr[i][r] = temp;
	    	++l;
	    	--r;
    	}

    }
    
    // 打印
    for (int i = 0; i < n; ++i)
    {
    	for (int j = 0; j < n; ++j)
    	{
    		cout << arr[i][j] << " ";
    	}
    	cout << endl;
    }
    return 0;
}