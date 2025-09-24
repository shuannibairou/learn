#include <iostream>
#include <string>
using namespace std;
// 返回一个学生信息的函数,加上默认实参
// 默认实参后面必须都是默认实参,也就是默认实参放在参数列表的最后
string stuInfo(string name,int age=20,double score=60){
	string info = "学生姓名:" + name + "\t年龄:" + to_string(age)+"\t成绩:"+to_string(score);
	return info;
}
int main(){
    cout << stuInfo("twf",20,100)  << endl;  // 学生姓名:twf	年龄:20	成绩:100.000000
    // 省事多了,有默认值
    cout << stuInfo("zjl")  << endl;  // 学生姓名:zjl	年龄:20	成绩:60.000000
    // 必须按照参数的顺序来传值
    cin.get();
}