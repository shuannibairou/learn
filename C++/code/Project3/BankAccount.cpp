// BankAccount.cpp
#include "BankAccount.h" // 包含我们自己的头文件


// 构造函数实现
// 使用"成员初始化列表"来初始化字段，这是C++的高效做法
BankAccount::BankAccount(const string& name, double initialBalance) 
: ownerName(name), balance(initialBalance) { // 初始化列表
	// 构造函数体
	cout << "账户创建成功！户主：" << ownerName << ", 初始余额：" << balance << endl;
}

// 存款
void BankAccount::deposit(double amount) {
	if (amount > 0) {
		balance += amount;
	}
}

// 取款
bool BankAccount::withdraw(double amount) {
	if (amount > 0 && amount <= balance) {
		balance -= amount;
		return true; // 取款成功
	}
	return false; // 取款失败
}

// 获取余额 - const函数，实现处也要加上const
double BankAccount::getBalance() const {
	return balance;
}

// 获取户主名
string BankAccount::getOwnerName() const {
	return ownerName;
}

// 析构函数实现
BankAccount::~BankAccount() {
	cout << "账户销毁。户主：" << ownerName << "，最终余额：" << balance << endl;
}
