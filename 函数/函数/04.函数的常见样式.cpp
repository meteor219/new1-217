#include<iostream>
using namespace std;
//�޲��޷�
void test01()
{
	cout << "����test01" << endl;
	return;
}
//�в��޷�
void test02(int a)
{
	cout << "����test02 a=" <<a<< endl;
	return;
}

//�޲��з�
int test03()
{
	cout << "����test03" << endl;
	return 1000;
}
//�в��з�
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