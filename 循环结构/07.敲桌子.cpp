#include<iostream>
using namespace std;

int main7()
{
	for (int i = 0; i < 100; i++)
	{
		int a = i % 10;//ȡ��λ
		int b = i / 10 % 10;//ȡʮλ
		int c = i / 100;
		int d = i % 7;
		if (a == 7 || b == 7 || c == 7|| d == 0)//�û򣬾Ϳ��Բ�����ô��else if��
		{
			cout << "������" << endl;
		}

		else
		{
			cout << i << endl;
		}
	}
	system("pause");
return 0;

}