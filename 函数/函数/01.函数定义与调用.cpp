#include<iostream>
using namespace std;

//1.����ֵ���� int��2�������� add��3.�����б�int num1 ��int num2����4.��������䣻5.return���ʽ
//��������ʱ��û��ʵ�ʵ�����
//��ֻ��һ����ʽ�ϵ����ݣ��β�
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}
int main1()
{	
	//�ӷ�������ʵ����������ӣ����ҷ������ֵ
	//���ã���������������
	int a = 10;
	int b = 30;
	int c =add(a, b);
	cout << "c=" << c << endl;

	a = 100;
	b = 500;
	c = add(a, b);
	cout << "c=" << c << endl;

	system("pause");
	return 0;
}