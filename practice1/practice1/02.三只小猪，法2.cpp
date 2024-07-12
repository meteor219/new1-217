#include <iostream>
using namespace std;
int main2()
{
	int A = 0;
	int B = 0;
	int C = 0;
	cout << "请分别输入三只小猪ABC的重量" << endl;
	cin >> A;
	cin >> B;
	cin >> C;
	if (A > B && A > C)
	{
		cout << "A最重" << endl;
	}
	else if (B > A && B > C)
	{
		cout << "B最重" << endl;
	}
	else if (C > A && C > B)
	{
		cout << "C最重" << endl;
	}
	system("pause");
	return 0;
}