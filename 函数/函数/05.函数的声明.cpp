#include<iostream>
using namespace std;

//����������������2022�������Լ�ʶ��,�ֲ����ˣ�����
int max(int a, int b);
//�ȽϺ������Ƚ����������ش�ֵ

int main5 ()
{
	int a = 10;
	int b = 30;
	cout <<max(a, b)<<endl;
	system("pause");
	return 0;
}
int max(int a, int b)
{
	return a > b ? a : b;
}