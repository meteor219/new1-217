#include <iostream>
using namespace std;

int main1()
{
	int A = 0;
	int B = 0;
	int C = 0;
	cout << "��ֱ�������ֻС��ABC������" << endl;
	cin >> A;
	cin >> B;
	cin >> C;
	if (A>B)//��дif ��else�зֱ𶼴�����������������дҪִ�еĴ���
	{
		if (A > C)
		{
			cout << "���ص�С����A������Ϊ" << A << endl;

		}
		else
		{
			cout << "���ص�С����C������Ϊ" << C << endl;
		}
	}
	else
	{
		if (B > C)
		{
			cout << "���ص�С����B������Ϊ" << B << endl;

		}
		else
		{
			if (C > B)
			{
				cout << "���ص�С����C������Ϊ" << C << endl;

			}
			else
			{
				cout << "���ص�С����B������Ϊ" << B << endl;

			}
		}
	}
	system("pause");
	return 0;
}