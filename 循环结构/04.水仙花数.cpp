#include<iostream>
using namespace std;
//Ҳ������ȡģ����10��ȡģ������100������ø�λʮλ��λ����if
int main4()
{
	int a = 0;
	int b = -1;
	int c = -1;

	do {
		a += 1;		do {
			b += 1;
			do {
				c += 1;

				if (a * 100 + b * 10 + c == a*a*a + b *b*b + c *c*c)
				{
					cout << a * 100 + b * 10 + c << endl;
				}

			} while (c < 9);
			c = -1;
		} while (b < 9);
		b = -1;
	} while (a < 9);
	system("pause");
	return 0;

}