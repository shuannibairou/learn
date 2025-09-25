#include <iostream>
/* 头文件 */
using namespace std;
// 声明
void selectStr(const string&,const string&,const string& (const string&,const string&));

// 返回更长的字符串
const string& longerStr(const string& str1,const string& str2){
	return str1.size()>str2.size() ? str1 :str2;
}
// 返回更短的字符串
const string& shorterStr(const string& str1,const string& str2){
	return str1.size()<str2.size() ? str1 :str2;
}

// 类型别名
// 法一
// typedef const string& Func(const string&,const string&);  // 函数类型
typedef const string& (*Funcp)(const string&,const string&);  // 函数指针类型
// 法二
// typedef decltype(longerStr) Func2;  // 类型提取,函数类型
// typedef decltype(longerStr) *Func2;  // 类型提取,函数指针类型

// void selectStr(const string& s1,const string& s2,const string& ptr(const string&,const string&));
// 对上面简化
void selectStr(const string& s1,const string& s2,Funcp fun){
	
	cout << fun(s1,s2) << endl;
}

int main(){
	string s1="longlonglonglonglong";
	string s2="short";
	selectStr(s1,s2,shorterStr);  // short
	selectStr(s1,s2,longerStr);  // longlonglonglonglong
    cin.get();
}