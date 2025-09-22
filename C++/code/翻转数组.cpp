// 翻转一个数组{1,2,3,4,5,6,7,8}
#include <iostream>
/* 头文件 */
using namespace std;
/* 函数 */

// 法1

// int main(){
// 	const int n=8;
//     int arr1[n] = {1,2,3,4,5,6,7,8};
//     int arr2[n];

//     for (int i = 0; i < n; ++i)
//     {
//     	arr2[i]=arr1[n-i-1];  // i=0,arr2[0]=arr1[8-0-1],arr2[0]=8
//     }
//     // 遍历arr2,输出每一个元素
//     for (int i = 0; i < n; ++i)
//     {
    	
//     	cout << arr2[i]  << " ";
//     }  // 8 7 6 5 4 3 2 1 
//     cout << endl;
//     return 0;
// }

// 法2:双指针法

// 能不能不创建新的数组,完成上面功能


int main(){
	const int n=8;
    int arr1[n] = {1,2,3,4,5,6,7,8};

    int head = 0;
    int tail = n-1; 
    // 当head>=tail,交换完成
    while(head<tail){
    	int temp=arr1[head];
    	arr1[head]=arr1[tail];
    	arr1[tail]=temp;
    	// 头尾指针向中间移动
    	head++;
    	tail--;
    }
    // 遍历arr1,输出每一个元素
    for (int i = 0; i < n; ++i)
    {
    	
    	cout << arr1[i]  << " ";
    }  // 8 7 6 5 4 3 2 1 
    cout << endl;
    return 0;
}