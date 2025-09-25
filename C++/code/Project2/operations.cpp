#include "common.h"
#include "account_item.h"
// 读取文件中的账目数据
void loadDataFromFile(vector<AccountItem>& items){
	ifstream input(FILENAME);
	if (!input.is_open()) {
    // 处理文件打开失败的情况
    	return;
	}
	// 逐行读取每条账目,包装成AccountItem
	AccountItem item;
	// 读不到数据就退出
	while(input >> item.itemType >> item.amount >> item.detail){
		items.push_back(item);
	}
	input.close();
}

// -----------------------------------1.记账----------------------------------------
// 记账操作
void accounting(vector<AccountItem>& items){

	// 读取键盘选择,并做合法性检验
	char key = readMeunSelection(3);
	switch(key){
	case '1':	// 收入
		income(items);
		break;
	case '2':	// 支出
		expand(items);
		break;
	// case '3':	// 返回主菜单
	default:
		break;
	}

}





// 记录一笔收入
void income(vector<AccountItem>& items){
	AccountItem item;

	item.itemType=INCOME;

	// 用户交互
	cout << "\n本次收入金额:";
	// 合法性校验
	item.amount=readAmount();
	cout << "备注:";
	getline(cin,item.detail);
	// 添加到vector中
	items.push_back(item);
	// 永久化保存
	insetIntoFile(item);

	// 显示成功信息
	cout << "\n-----------记账成功------------\n"  << endl;
	cout << "\n---------请按回车返回主菜单------\n"  << endl;
	string line;
	getline(cin,line);

}

void insetIntoFile(const AccountItem& item){
	// 输出到文件
	ofstream output(FILENAME,ios::out | ios::app);  // 写入方式:追加

	output << item.itemType << "\t" << item.amount << "\t" << item.detail << endl;

	output.close();
}


// 记录一笔支出
void expand(vector<AccountItem>& items){
	AccountItem item;

	item.itemType=EXPAND;

	// 用户交互
	cout << "\n本次支出金额:";
	// 合法性校验
	item.amount= -readAmount();
	cout << "备注:";
	getline(cin,item.detail);
	// 添加到vector中
	items.push_back(item);
	// 永久化保存
	insetIntoFile(item);

	// 显示成功信息
	cout << "\n-----------支出成功------------\n"  << endl;
	cout << "\n---------请按回车返回主菜单------\n"  << endl;
	string line;
	getline(cin,line);

}

// -----------------------------------2.查询----------------------------------------

// 查询操作
void query(const vector<AccountItem>& items){

	// 读取键盘选择,并做合法性检验
	char key = readMeunSelection(4);
	switch(key){
	case '1':	// 查询所有账目,统计总收支
		queryItems(items);
		break;
	case '2':	// 查询收入,统计收入
		queryItems(items,INCOME);
		break;
	case '3':	// 查询支出,统计支出
		queryItems(items,EXPAND);
	default:
		break;
	}

}

// 查询账目的函数
void queryItems(const vector<AccountItem>& items){
	cout << "-------------查询结果-------------"  << endl;
	cout << "\n类型\t\t金额\t\t备注\n" << endl;
	// 遍历所有账目,统计总收支
	int total = 0;
	for(auto item : items){
		printItem(item);
		total+=item.amount;
	}
	// 输出信息
	cout << "---------------------------------------------------------------" << endl;
	cout << "总收支:" << total << endl;
	cout << "\n---------请按回车返回主菜单------\n"  << endl;
	string line;
	getline(cin,line);
}

// 函数重载
void queryItems(const vector<AccountItem>& items,const string itemType){
	cout << "-------------查询结果-------------"  << endl;
	cout << "\n类型\t\t金额\t\t备注\n" << endl;
	// 遍历所有账目,统计总收入或者总支出
	int total = 0;
	for(auto item : items){
		if(item.itemType==itemType){

			printItem(item);
			total+=item.amount;
		}
	}
	// 输出信息
	cout << "---------------------------------------------------------------" << endl;
	cout << ((itemType==INCOME) ? "总收入:" : "总支出:") << total << endl;
	cout << "\n---------请按回车返回主菜单------\n"  << endl;
	string line;
	getline(cin,line);
}


// 打印输出一条账目的信息
void printItem(const AccountItem& item){
	cout << item.itemType << "\t\t" << item.amount << "\t\t" << item.detail << endl;

}