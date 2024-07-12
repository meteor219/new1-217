#include<iostream>
using namespace std;

//实现两个数字进行交换
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swap a=" << a << endl;
	cout << "swap b=" << b << endl;

}
void swap02(int *p1, int * p2)
{
	int temp = *p1;//把p1中存的值，解引用后存入临时变量
	*p1 = *p2;//将p2中的解引用后的值，存入p1中的地址
	*p2 = temp;
	cout << "swap02 a=" << *p1 << endl;
	cout << "swap02 b=" << *p2 << endl;

}
int main5()
{
	//指针和函数
	//1、值传递
	int a = 10;
	int b = 20;
	swap(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	
	//2、地址传递
	//如果是传递的地址，就会改变实参，因为虽然地址没变但是在函数里面改变了地址所指 的值
	swap02(&a, &b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	system("pause");
	return 0;
}