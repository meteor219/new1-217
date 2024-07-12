#include <iostream>
using namespace std;

int main1()
{
	int A = 0;
	int B = 0;
	int C = 0;
	cout << "请分别输入三只小猪ABC的重量" << endl;
	cin >> A;
	cin >> B;
	cin >> C;
	if (A>B)//先写if 和else中分别都代表了哪种条件，再写要执行的代码
	{
		if (A > C)
		{
			cout << "最重的小猪是A，体重为" << A << endl;

		}
		else
		{
			cout << "最重的小猪是C，体重为" << C << endl;
		}
	}
	else
	{
		if (B > C)
		{
			cout << "最重的小猪是B，体重为" << B << endl;

		}
		else
		{
			if (C > B)
			{
				cout << "最重的小猪是C，体重为" << C << endl;

			}
			else
			{
				cout << "最重的小猪是B，体重为" << B << endl;

			}
		}
	}
	system("pause");
	return 0;
}