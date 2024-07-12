#include<iostream>
using namespace std;

int main8()
{
	//外层执行一次，内层执行一周
	//打印10行，外层循环
	for (int j = 0; j < 10; j++) 
	{
		//打印一行星图，内层循环

		for (int i = 0; i < 10; i++)
		{
			cout << "* ";
		}
		cout << endl; 
	}
	
	system("pause");
	return 0;
}