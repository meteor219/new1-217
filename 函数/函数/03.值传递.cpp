#include<iostream>
using namespace std;

//值传递
//定义函数，实现两个数据的交换

void swap(int num1, int num2)//void  不需要返回值
{
	cout << "交换前的数字为" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "交换后的数字为" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;

	return;
}
int main3()
{
	int a = 18;
	int b = 31;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	//做值传递时，函数的形参会发生改变，但实参不会改变
	swap(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	system("pause");
	return 0;
}