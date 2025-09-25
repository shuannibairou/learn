#include "common.h"
#include "account_item.h"

int main(){

	// 1.加载文件中的账目数据
	vector<AccountItem> items;
	loadDataFromFile(items);
	bool quit = false;

	while(!quit){
		// 2. 显示主菜单
		showMainMenu();
		// 3. 读取键盘选择,并做合法性检验
		char key = readMeunSelection(3);
		switch(key){
		case '1':	// 结账
			showAccountingMenu();
			accounting(items);
			break;
		case '2':	// 查询
			showQueryMenu();
			query(items);
			break;
		case '3':	// 退出
			cout << "是否确认退出?(Y/N):";
			if (readQuitconfirm()=='Y')
				quit=true;
			break;
		default:
			break;
		

		}
	}
}
