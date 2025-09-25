#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#define INCOME "收入"
#define EXPAND "支出"
// 必须现在这个路径下创建这个文件
#define FILENAME "D:\\data\\AccountBook.txt"

using namespace std;

// 通用功能性函数的声明
void showMainMenu();
void showAccountingMenu();
void showQueryMenu();


// 合法性校验函数
char readMeunSelection(int);
char readQuitconfirm();
// 读取输入金额,并做合法性校验
int readAmount();