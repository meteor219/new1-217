#include <iostream>
using namespace std;


//常量的定义：
//第一种：#define 常量名 （一般在代码最开始的位置定义）
//第二种：const 修饰的变量
#define Day 7
int main1()
//main在一个项目里充当入口的角色
//有且只能出现一个，其他源文件只能用main1，main2代替
//如果要运行哪一个子程序就可以把前一个运行的main改成main1，而想要运行的程序中的main1改成main
{
	cout << "一周一共有" << Day << "天" << endl;

	const int month = 12;//const修饰的变量也是常量，不能再进行修改。
	cout << "一年有" << month << "个月份" << endl;
	system("pause");
	return 0;
}