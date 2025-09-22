#include <iostream>
/* 头文件 */
using namespace std;
/* 函数 */
bool is_equal(int targe,int sum){
	if (targe != sum)
	{
		return false;
	}
	return true;
}
int main(){
	// n可以在以后更改
	const int n = 3;
	int arr[n][n]={
		{4,9,2},
		{3,5,7},
		{8,1,6}
	};
	// 计算目标和
	int targe = (1+n*n)*n/2;  // 高斯
	// 标志位
	bool flag = true;
	// // 校验每一行
	// for (int i = 0; i < n; ++i)
	// {
	// 	int sum = 0;
	// 	// 累加i行的每一个元素
	// 	for (int j = 0; j < n; ++j)
	// 	{
	// 		sum += arr[i][j];  // 注意
	// 	}
	// 	// 判断是否等于target
	// 	flag=is_equal(targe,sum);

	// }
	// // 校验每一列
	// for (int i = 0; i < n; ++i)
	// {
	// 	int sum = 0;
	// 	// 累加i列的每一个元素
	// 	for (int j = 0; j < n; ++j)
	// 	{
	// 		sum += arr[j][i];  // 改
	// 	}
	// 	// 判断是否等于target
	// 	flag=is_equal(targe,sum);
		
	// }
	// // 校验对角线
	// int sumDiag1 = 0,sumDiag2 = 0;
	// for (int i = 0; i < n; ++i)
	// {
	// 	// 左上↘️右下
	// 	sumDiag1 = arr[i][i];
	// 	// 右上↙️左下
	// 	sumDiag2 = arr[i][n-1-i];

	// }

	// 优化
	// 校验每一列,每一行
	int sumDiag1 = 0,sumDiag2 = 0;
	for (int i = 0; i < n; ++i)
	{
		int sumRow=0,sumCol=0;
		for (int j = 0; j < n; ++j)
		{
			sumRow += arr[i][j];
			sumCol += arr[j][i];
		}
		flag=is_equal(targe,sumRow)&&is_equal(targe,sumCol);
		// 左上↘️右下
		sumDiag1 = arr[i][i];
		// 右上↙️左下
		sumDiag2 = arr[i][n-1-i];
	}
	// 判断是否等于target
	flag=is_equal(targe,sumDiag1)&&is_equal(targe,sumDiag2);

	// 输出判定结果
	cout << (flag ? "y":"n") << endl;
	
    return 0;
}