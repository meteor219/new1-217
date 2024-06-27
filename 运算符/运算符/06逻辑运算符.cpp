#include<iostream>
using namespace std;

int main()
{
	//逻辑非 ！
	int a = 10;//int 输入小数的话会自动识别成0
	cout << !a << endl;
	cout << !!a << endl;//可以将非0的数输出成1

	//逻辑与 && 相当于串联电路 要同时为高电平1 输出才是高电平1
	int b = 10;
	int c = 0;
	int d = 0;
	cout << (a && b) << endl;
	cout << (a && c) << endl;

	//逻辑或 || 相当于并联 只要有一个为高电平1 则输出为高电平1
	cout << (a || b) << endl;
	cout << (a || c) << endl;
	cout << (c || d) << endl;
	system("pause");
	return 0;
}