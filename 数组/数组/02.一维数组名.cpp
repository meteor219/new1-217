#include<iostream>
using namespace std;

//一维数组名用途：统计整个数组在内存中的长度；获取内存中的首地址
int main2()
{
	//通过数组名查看整个数组所占内存
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "整个数组占用的内存为：  " << sizeof(arr) << endl;
	cout << "一个元素所占的内存为:   " << sizeof(arr[0]) << endl;
	cout << "数组中元素的个数为:  " << sizeof(arr) / sizeof(arr[0]) << endl;

	//获取内存中的首地址
	cout << "数组的首地址为： " << arr << endl;//可以在前面加(int)arr,就可以转成16进制了
	cout << "第一个元素的地址为： " << &arr[0] << endl;

	system("pause");
	return 0;
}