#include<iostream>
using namespace std;
//无条件跳转语句 goto flag;    flag:,,,
//一般不建议使用，又乱又容易崩
int main()
{
	cout << "1.xxxx" << endl;
	cout << "2.xxxx" << endl;
	goto flag;
	cout << "3.xxxx" << endl;
	cout << "4.xxxx" << endl;
	flag:
	cout << "5.xxxx" << endl;

system("pause");
return 0;
}