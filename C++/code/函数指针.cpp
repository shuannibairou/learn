#include <iostream>
#include <string>
/* 头文件 */
using namespace std;
/* 函数 */
string stuInfo(string name,int age=20,double score=60){
	string info = "学生姓名:" + name + "\t年龄:" + to_string(age)+"\t成绩:"+to_string(score);
	return info;
}
int main(){
    string (*ptr)(string,int,double)=nullptr;
    // ptr=&stuInfo;  // 让函数指针指向函数
    ptr=stuInfo;  // 可以简写
    // cout << ptr("zjl") << endl;  // ❌ 编译报错：实参不足,不会携带默认实参信息
    cout << ptr("zjl",20,100.0)  << endl; // ✅ 学生姓名:zjl 年龄:20   成绩:100.000000
    cin.get();
}
