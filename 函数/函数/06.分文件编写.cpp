#include<iostream>
using namespace std;
#include"061.swap.h"//引用自己写的函数用引号
//函数的分文件编写
//实现两个数字进行交互
//void swap1(int a, int b);
//1.创建.h的头文件
//2.创建.cpp的源文件
//3.在头文件中写函数的声明 ，要包括一些前缀
//4.在源文件中写函数的定义 ，要include头文件
int main()
{
	int a = 10;
	int b = 30;
	swap1(a, b);
	system("pause");
	return 0;
}

//void swap1(int a, int b)
//{
//
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//}
