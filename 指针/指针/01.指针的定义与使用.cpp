#include<iostream>
using namespace std;

int main1()
{
	//1、定义一个指针 数据类型 *指针名；
	int a = 10;
	int* p;
	//给指针计入a的地址 &a &为取址符
	p = &a;
	cout << "a的地址为" << &a << endl;
	cout << "指针p=" << p << endl;

	//2、如何使用指针
	//可以通过解引用的方式找到指针指向内存所存储的数据： 指针	前加上* 代表解引用
	*p = 1000;
	cout << "a=" << a << endl;
	cout << "*p" << *p << endl;
	//3.指针所占的内存空间 
	//在64位操作系统下占8个字节	
	//在32位操作系统下占4个字节

	int c = 10;
	int* x = &c;
	cout << "sizeof int *=" << sizeof(x) << endl;//无论是什么数据类型的指针都是8个字节
	system("pause");
	return 0;
}