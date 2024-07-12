#include<iostream>
using namespace std;
//dowhile 是先执行循环语句，再判断条件
int main3()
{
	//do{循环语句} while{循环条件}
	int num = 0;
	do
	{
		cout << num << endl;
		num += 1;
	} while
		(num < 10);
	system("pause");
	return 0;
}