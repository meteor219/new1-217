#include<iostream>
using namespace std;
//continue结束本次循环中为执行的代码，直接执行下一次循环
int main11()
{
	for (int i = 0; i < 100; i++)
	{
		if (i % 2==0)
		{
			continue;
		}
		cout << i << endl;
	}
	system("pause");
	return 0;
}