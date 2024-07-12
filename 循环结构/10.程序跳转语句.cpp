#include<iostream>
using namespace std;

int main10()
{
	//break的使用时机
	//1、出现在Switch语句中
	//cout << "请按数字键选择副本的难度" << endl;
	//cout << "1、普通" << endl;
	//cout << "2、中等" << endl;
	//cout << "3、困难" << endl;
	//int select = 0;//创建一个选择结果的变量
	//cin >> select;
	//switch (select)
	//{
	//case 1:
	//	cout << "您选择的是普通难度" << endl;
	//	break;
	//case 2:
	//	cout << "您选择的是中等难度" << endl;
	//	break;

	//case 3:
	//	cout << "您选择的是困难难度" << endl;
	//	break;

	//default:
	//	cout << "请输入数字123选择难度" << endl;
	//	break;

	//}
	//2、出现在循环语句中
	for (int i = 0; i < 10; i++)
	{
		//当i等于5时退出循环
		if (i == 5)
		{
			break;
		}		
		cout << i << endl;
	}
	//3、出现在嵌套循环中，跳出最近的一层循环

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j>i)
			{
				break;
			}
			cout << "* ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}