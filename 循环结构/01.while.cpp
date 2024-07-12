#include<iostream>
using namespace std;
 
int main1()
{
	//while(条件){执行语句}只要while里面的条件为真，就循环里面的语句
	//打印0-9
	int num = 0;
	while (num<10)
	{
		cout << num << endl;
		num += 1;
	}
	system("pause");
	return 0;
}