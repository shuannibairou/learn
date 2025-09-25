#pragma once
#include "common.h"
// 定义结构体类型

struct AccountItem
{
	string itemType;
	int amount;
	string detail;

};


// 针对账目数据进行操作的函数声明

// 加载账目数据
void loadDataFromFile(vector<AccountItem>&);


// 记账操作
void accounting(vector<AccountItem>&);
void insetIntoFile(const AccountItem&);
void income(vector<AccountItem>&);
void expand(vector<AccountItem>&);
// 查询操作
void query(const vector<AccountItem>&);
void queryItems(const vector<AccountItem>&);
void queryItems(const vector<AccountItem>&,const string);
void printItem(const AccountItem&);