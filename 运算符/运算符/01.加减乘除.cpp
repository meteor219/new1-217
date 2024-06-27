#include<iostream>
using namespace std;

int main1()
{
	//加减乘除运算
	int a1 = 10;
	int b1 = 3;
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;//两个整型相除最后的结果也是整型，小数部分直接舍去

	int a2 = 10;
	int b2 = 20;
	cout << a2 / b2<<endl;

	double a3 = 11.1;
	double b3 = 15.6;
	cout << a3 / b3 << endl; 

	system("pause");
	return 0;

}