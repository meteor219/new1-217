#include<iostream>
using namespace std;

int main2()
{
	int a1 = 10;
	int b1 = 3;
	cout << a1 % b1 << endl;//取模运算的实质就是除法中的去余数

	int a2 = 10;
	int b2 = 20;
	cout << a2 % b2 << endl;
	//两个小数是不可以做取模运算的
	double a3 = 3.14;
	double b3 = 1.1;
	//cout << a3 % b3 << endl; no way
	system("pause");
	return 0;
}