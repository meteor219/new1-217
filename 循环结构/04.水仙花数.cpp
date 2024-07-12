#include<iostream>
using namespace std;
//也可以用取模，÷10再取模，跟÷100，来求得个位十位百位，再if
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