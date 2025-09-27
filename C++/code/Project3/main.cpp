// main.cpp
#include "BankAccount.h"


int main() {
	// 方式1：在栈上创建对象 - C++特有，最常见的方式
	// 对象生命周期由作用域（花括号）控制，离开作用域自动调用析构函数
	cout << "--- 栈上对象 ---" << endl;
	BankAccount aliceAccount("Alice", 1000.0); // 就像创建int一样：int x = 5;
	aliceAccount.deposit(500.0);
	cout << "Alice余额: " << aliceAccount.getBalance() << endl;
	
	// 方式2：在堆上创建对象 - 类似于Java的 `new`
	// 你必须自己管理内存！
	cout << "\n--- 堆上对象 ---" << endl;
	BankAccount* bobAccount = new BankAccount("Bob", 500.0); // new返回指针
	bobAccount->withdraw(100.0); // 指针使用 -> 来访问成员
	cout << "Bob余额: " << bobAccount->getBalance() << endl;
	
	// 堆上创建的对象必须手动销毁！
	delete bobAccount; // 调用析构函数并释放内存
	bobAccount = nullptr; // 好习惯：将指针置空，防止“悬空指针”
	
	cout << "\n--- 作用域结束，栈对象自动销毁 ---" << endl;
	cin.get();
	return 0;
} 
// main函数结束，aliceAccount离开作用域，它的析构函数会被自动调用
