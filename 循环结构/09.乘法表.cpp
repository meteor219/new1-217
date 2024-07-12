#include<iostream>
using namespace std;

int main9()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			if(j<=i && j!=0)
			{
				cout << j << "*" << i << "=" << i * j<< "\t";
			}
		}
		cout << endl;
	}
	for (int a = 1; a < 10; a++)
	{
		for (int b = 1; b <= a; b++)
		{
			cout << b << "*" << a << "=" << a * b << "\t";

			}
		cout << endl;
	}

	system("pause");
	return 0;
}