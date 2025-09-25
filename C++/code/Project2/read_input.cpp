#include "common.h"
// 读取键盘的输入的菜单选项,进行合法性校验
char readMeunSelection(int options){
	string str;
	while(true){
		getline(cin,str);
		// 进行合法性校验
		if (str.size()!=1 || str[0]-'0'<=0 || str[0]-'0'> options)
		{
			cout << "输入错误,请重新选择:";
		}else{
			break;
		}
	}

	// 现在输入就合法了
	return str[0];
		
}


// 读取确认退出信息,并进行合法性校验

char readQuitconfirm(){
	string str;
	while(true){
		getline(cin,str);
		// 进行合法性校验
		if (str.size()!=1 || toupper(str[0]) !='Y' && toupper(str[0])!='N')
		{
			cout << "输入错误,请重新输入(Y/N):";
		}else{
			break;
		}
	}
	return toupper(str[0]);

}

// 读取输入金额,并做合法性校验
int readAmount(){
	int amount;

	string str;
	while(true){
		getline(cin,str);
		// 进行合法性校验
		

		try{
			amount=stoi(str);  // 将string转int
			break;
		}catch(invalid_argument e){  // 捕获异常
		
			cout << "输入错误,重新输入:";
		}
	}
	return amount;
}
