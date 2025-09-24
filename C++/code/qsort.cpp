#include <iostream>
/* 头文件 */
using namespace std;
/* 函数 */
void printArray(const int(&)[10]);
void quicksort(int(&)[10],int,int);
int partition(int(&)[10],int,int);  // 分区函数
void swap(int(&)[10],int,int);
int main(){
    int arr[10]={23,45,18,6,11,19,99,18,12,3};
    printArray(arr);
    quicksort(arr,0,9);
    printArray(arr);  // 3 6 11 12 18 18 19 23 45 99 
    cin.get();
}
// 定义快速排序的函数,用递归实现
void quicksort(int(&a)[10],int start,int end){
	// 基准情况
	if(start>=end)
		return;
	int mid = partition(a,start,end);
	if (mid==-1){
		cout << "分区函数出错了"  << endl;
		return;
	}
	// 递归调用,分别对两部分继续排序
	quicksort(a,start,mid-1);
	quicksort(a,mid+1,end);
}
int partition(int(&a)[10],int start,int end){
	// 选取支点
	int pivot=a[start];

	// 指定指向数组头尾元素的"指针"
	int l=start,r=end;
	while(l<r){
		// l指针不断向右移动,直到找到一个比支点大的值
		// r指针不断向左移动,直到找到一个比支点小的值
		while(a[l]<=pivot && l<r){
			l++;
		}
		while(a[r]>=pivot && l<r){
			r--;
		}
		// 左右互换
		swap(a,l,r);
		
	}
	// 判断指针相遇位置的值,跟支点值的大小关系
	if (a[l]<pivot){
		// 小,直接换到数组的头位置
		swap(a,start,l);
		return l;
	}else if (a[l]>pivot){
		// 大,前一个位置直接换到数组的头位置
		swap(a,start,l-1);
		return l-1;
	}
	return -1;

}

void printArray(const int(&a)[10]){
	for(int num:a){
		cout << num << " ";
	}
	cout << endl;
}
void swap(int(&a)[10],int i,int j){
	int temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}