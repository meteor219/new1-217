#include<iostream>
using namespace std;
//continue��������ѭ����Ϊִ�еĴ��룬ֱ��ִ����һ��ѭ��
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