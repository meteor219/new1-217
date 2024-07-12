#include<iostream>
using namespace std;

int main()
{
	int score[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	string name[3] = { "张三","李四","王五" };
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += score[i][j];

		}
		cout <<name[i]<<"的总分为：" << sum << endl;
	}
	system("pause");
	return 0;
}