#include<iostream>
using namespace std;
int main3()
{
	//1、不能用关键字作为变量名
	//例如int int = 4错误

	//2、常量、变量的命名
	//只能用字母数值下划线组合命名
	//开头只能是字母或者下划线
	int abc_123 = 10;
	//命名是区分大小写的
	int ABC_123 = 20;
	cout << abc_123 << endl;

	//起名最好见名知意
	int 数字1 = 10;//虽然用abc也可以起到相同的作用，但是用num命名能跟好的便于以后理解
	int 数字2 = 20;//现在还能用汉字命名了！！！
	int sum = 数字1 + 数字2;
	cout << sum << endl;
	system("pause");

	return 0;

}