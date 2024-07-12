#include<iostream>
using namespace std;

int main3()
{
	//const修饰指针有三种情况

	//1、const修饰指针-- 常量指针	
	//指针指向的值不能改，指针的指向可以改
	int a = 10;
	int b = 10;
	const int* p = &a;
	//*p = 20; 错误
	p = &b; //正确
	
	//2.const修饰常量--指针常量
	//指针的指向不能改，指针指向的值可以改
	int* const p2 = &a;
	*p2 = 39;//正确
	//p2 = &b;错误

	//3、const修饰常量和指针
	const int* const p3 = &a;
	//都不能改
	system("pause");
	return 0;
}