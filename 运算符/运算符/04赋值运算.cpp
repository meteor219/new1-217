#include<iostream>
using namespace std;

int main4()
{
	// =  在创建变量后，就可以直接赋值了
	int a = 10;
	a = 100;
	cout << "a=" << a << endl;

	// +=相当于a=a+2
	a = 10;
	a += 2;
	cout << "a=" << a << endl;
	// -=
	a = 10;
	a -= 2;//a=a-2
	cout << "a=" << a << endl;
	// *=
	a = 10;
	a *= 2;//a=a*2
	cout << "a=" << a << endl;

	// /=
	a = 10;
	a /= 2;
	cout << "a=" << a << endl;

	// %=
	a = 10;
	a %= 2;//a=a%2
	cout << "a=" << a << endl;

	system("pause");
	return 0;

}