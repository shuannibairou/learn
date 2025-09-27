// BankAccount.h
#pragma once // 防止头文件被重复包含（类似于Java的import保护）
#include <string>
#include <iostream>
using namespace std;

class BankAccount {
	private: // 默认就是private，但显式写出来更清晰
	string ownerName; // string 类似于Java的String
	double balance;        // 基本类型和Java很像
	
public:
	// 1. 构造函数 - 注意：没有`new`关键字
	BankAccount(const string& name, double initialBalance); // 参数使用常量引用，高效且安全
	
	// 2. 成员函数（方法）
	void deposit(double amount);
	bool withdraw(double amount); // 返回是否取款成功
	double getBalance() const;    // const成员函数：承诺不修改对象状态
	string getOwnerName() const;
	
	// 3. 析构函数 - Java没有的概念！
	~BankAccount(); 
};
