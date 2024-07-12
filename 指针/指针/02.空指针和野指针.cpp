#include<iostream>
using namespace std;

int main2()
{
	//空指针和野指针所访问的空间都不是自己申请的，不能随意访问
	//空指针
	//1、空指针用于给指针初始化 
	int* p = NULL;
	//2、空指针不允许访问 0-255之间的编号是系统占用的
	*p = 100;//没有结构错误但，就是不能访问

	//野指针
	int* x = (int *)0x1100;//也不能直接访问地址，运行会报错
	cout << *x << endl;
	system("pause");
	return 0;
}