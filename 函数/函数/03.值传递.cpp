#include<iostream>
using namespace std;

//ֵ����
//���庯����ʵ���������ݵĽ���

void swap(int num1, int num2)//void  ����Ҫ����ֵ
{
	cout << "����ǰ������Ϊ" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "�����������Ϊ" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;

	return;
}
int main3()
{
	int a = 18;
	int b = 31;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	//��ֵ����ʱ���������βλᷢ���ı䣬��ʵ�β���ı�
	swap(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	system("pause");
	return 0;
}