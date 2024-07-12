#include<iostream>
using namespace std;
//无参无返
void test01()
{
	cout << "这是test01" << endl;
	return;
}
//有参无反
void test02(int a)
{
	cout << "这是test02 a=" <<a<< endl;
	return;
}

//无参有反
int test03()
{
	cout << "这是test03" << endl;
	return 1000;
}
//有参有反
int test04(int a)
{
	cout << "this is test04 a=" <<a<< endl;
	return a;
}
int main4()
{
	test01();
	test02(100);
	int num1 = test03();
	cout <<"num1="<< num1 << endl;
	int num2 = test04(500);
	cout << "num2=" << num2 << endl;
	system("pause");
	return 0;
}