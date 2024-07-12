#include<iostream>
using namespace std;

int main7()
{
	for (int i = 0; i < 100; i++)
	{
		int a = i % 10;//取个位
		int b = i / 10 % 10;//取十位
		int c = i / 100;
		int d = i % 7;
		if (a == 7 || b == 7 || c == 7|| d == 0)//用或，就可以不用那么多else if了
		{
			cout << "敲桌子" << endl;
		}

		else
		{
			cout << i << endl;
		}
	}
	system("pause");
return 0;

}