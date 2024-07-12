#include<iostream>
using namespace std;

//1.返回值类型 int；2、函数名 add；3.参数列表（int num1 ，int num2）；4.函数体语句；5.return表达式
//函数定义时并没有实际的数据
//他只是一个形式上的数据，形参
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}
int main1()
{	
	//加法函数，实现两个数相加，并且返回相加值
	//调用：函数名（参数）
	int a = 10;
	int b = 30;
	int c =add(a, b);
	cout << "c=" << c << endl;

	a = 100;
	b = 500;
	c = add(a, b);
	cout << "c=" << c << endl;

	system("pause");
	return 0;
}