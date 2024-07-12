#include<iostream>
using namespace std;
int main5()
{
	int a = -1;
	int b = -1;
	int c = -1;

	do {

		a += 1;
		//cout << a<<endl;
		do {
			b += 1;
			cout << a * 10 + b << endl;
			//cout << "b=" << b<<endl;
		} while (b < 10);
		b = 0;
	} while (a < 9);
	system("pause");
	return 0;

}