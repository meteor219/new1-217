#include<iostream>
using namespace std;

int main3()
{
	//前置递增
	//只要出现a++或者++a，变量a都会进行加一运算，可以将这一步藏入运算式中！！
	//就是先进行变量的加一，再进行表达式的运算
	int a = 1;
	a++;
	cout << "a=" << a << endl;
	int a2 = 10;
	int b2 = ++a2 * 10;
	cout << "a2=" << a2 << endl;
	cout << "b2=" << b2 << endl;
	//后置递增
	 
	//就是先进行表达式的运算，再对变量加一
	int a3 = 10;
	int b3 = a3++ * 10;
	cout << "a3=" << a3 << endl;
	cout << "b3=" << b3 << endl;

	//前置递减
	//先对变量减一，再带入表达式运算
	
	//后置递减
	//先对表达式运算，再对变量减一。
	system("pause");
	return 0;

}