#include<iostream>
using namespace std;

//c++在创建一个变量或者常量时，必须根据所设定的数据类型来分配内存；
//所以要先说明创建变量时的数据类型，合理利用内存空间；
//short 2字节(-2^15;2^15-1)；int4字节(-2^31;2^31-1)；long4字节；longlong8字节
int main4()
{
	short num1 = 10;
	int num2 = 10;
	long num3 = 10;
	long long num4 = 10;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	cout << "num3=" << num3 << endl;
	cout << "num4=" << num4 << endl;
	//sizeof的使用
	//sizeof可以直接得出数据类型的所占的内存空间
	//sizeof（数据类型、变量名）
	cout << num1 <<"num1内存空间为" << sizeof(num1) << sizeof(short) << endl;
	system("pause");
	return 0;
}