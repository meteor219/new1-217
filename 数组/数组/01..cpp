#include<iostream>
using namespace std;

int main1()
{
//数组是相同数据类型的集合
	//存在连续的地址中
	//1、数据类型 数组名【数组长度】
	//2、数据类型 数组名【长度】 = {值1，值2.。。}
	//3、数据类型 数组名【】={值1，值2.。。}
	
	 
	//1、数据类型 数组名【数组长度】 直接定义一个长度确定的空数组
	int arr[5];
	//给数组中的元素赋值
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
	//访问数组中的元素
	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl;
	cout << arr[4] << endl;
	//2、数据类型 数组名【长度】 = {值1，值2.。。}
	//没有赋值的数据，用0补齐
	int arr2[5] = { 10,20,30,40,50 };
	cout << arr2[0] << endl;
	cout << arr2[1] << endl;
	cout << arr2[2] << endl;
	cout << arr2[3] << endl;
	cout << arr2[4] << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr2[i] << endl;
	}
	//3、数据类型 数组名【】={值1，值2.。。}
	//可以不写长度
	int arr3[] = { 10,20,30,40,50,60,70,80,90 };
	for (int i = 0; i < 9; i++)
	{
		cout << arr3[i] << endl;
	}

	system("pause");
	return 0;
}