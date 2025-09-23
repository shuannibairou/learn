#include <iostream>
/* 头文件 */
using namespace std;
// 递归二分查找函数
// 参数:1.数组,2.开始位置,3.结束位置,4.目标值
int search(const int(&a)[10],int start,int end,int targe){
	// 基准情况
	// 没有找到
	// 快速判断,比较开始和结束,看在里面吗
	if(start > end || targe < a[start] || targe > a[end])
		return -1;
	// 计算中间位置的坐标
	int mid = (start+end)/2;
	// 比较中间位置数据和目标值的大小
	if (a[mid]==targe)
		return mid;
	else if(a[mid] > targe)
		return search(a,start,mid-1,targe);  // 搜索前半部分
	else
		return search(a,mid+1,end,targe);  // 搜索后半部分
	
}
int main(){
	int arr[10]={1,2,11,22,33,44,55,66,77,88};
	int key = 77;
	int len = sizeof(arr)/sizeof(arr[0]);
	int result = search(arr,0,len-1,key);

	result == -1 ?
		cout << "在数组中没有找到" << key << "!" << endl :
		cout << "找到了" << key << ",下标是:" << result << endl;
		cin.get();
    return 0;
}
