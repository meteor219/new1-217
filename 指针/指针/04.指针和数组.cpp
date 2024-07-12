#include<iostream>
using namespace std;

int main4()
{
	//利用指针访问数组中的元素
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	cout << "第一个数组元素为 " << arr[0] << endl;

	int* p = arr;//arr就是数组的首地址
	cout << "利用指针来访问第一个元素 " << *p << endl;

	p++;//p指针就会向右偏移4个字节，因为p指针定义的就是int 加一地址就直接加1*4
	cout << "利用指针来访问第2个元素 " << *p << endl;
	cout << "利用指针来遍历这个数组"<< endl;
	int* p2 = arr;
	for (int i = 0; i < 10; i++) {
		cout << "第" << i + 1 << "个元素为：" << *p2 << endl;
		p2++;

	}

	system("pause");
	return 0;
}