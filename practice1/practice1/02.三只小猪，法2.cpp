#include <iostream>
using namespace std;
int main2()
{
	int A = 0;
	int B = 0;
	int C = 0;
	cout << "��ֱ�������ֻС��ABC������" << endl;
	cin >> A;
	cin >> B;
	cin >> C;
	if (A > B && A > C)
	{
		cout << "A����" << endl;
	}
	else if (B > A && B > C)
	{
		cout << "B����" << endl;
	}
	else if (C > A && C > B)
	{
		cout << "C����" << endl;
	}
	system("pause");
	return 0;
}