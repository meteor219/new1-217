#include<iostream>
using namespace std;

int main8()
{
//字符型变量创建的方式：
	char th = 'a';
	cout << th << endl;
	//字符型变量的内存大小
	cout << "内存大小为" << sizeof(th) << endl;
	//char ch = "ab";不能用双引号，引号内只能有一个字母
	//输出ASCII码
	cout << int(th) << endl;
	//a-97
	//A-65 
	system("pause");
	return 0;
}