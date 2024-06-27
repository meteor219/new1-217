#include<iostream>
using namespace std;

int main5()
{
	int a = 10;
	int b = 20;
	cout << (a == b) << endl;//在进行比较运算时要加小括号，提高优先级，不然会跟后面的小于号重报错
	cout << (a != b) << endl;
	cout << (a > b) << endl;
	cout << (a < b) << endl;
	cout << (a <= b) << endl;
	cout << (a >= b) << endl;
	system("pause");
	return 0;
}