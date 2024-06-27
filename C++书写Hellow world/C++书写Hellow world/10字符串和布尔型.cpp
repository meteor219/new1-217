#include<iostream>
#include<string>
using namespace std;

int main10()
{
//1、c风格的字符串
	//区分字符型变量，有无括号，双引号表示字符串，单引号表示字符
	char a[] = "hello world";//char 变量名[]="字符串名称"，其中中括号不算变量名
	cout << "hello world " << endl;
	cout << a << endl;//可以将重复使用的名称设置为变量方便接下来使用

	//2、c++风格的字符串
	//要包含一个头文件#include<string>养成良好编程习惯
	string str = "hello world";
	cout << str << endl;

	//3、布尔型
	// true代表真（1）；false代表假（0）;非零的值表示的也是真不能反推
	bool flag = true;
	cout << "flag=" << flag << endl;
	flag = false;//这里不加bool是因为flag之前已经创建为bool型变量了
	cout << "flag=" << flag << endl;
	cout << "bool型变量所占用的内存空间为" << sizeof(bool)<<endl;
	system("pause");
	return 0;
}