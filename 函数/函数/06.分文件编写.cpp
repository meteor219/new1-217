#include<iostream>
using namespace std;
#include"061.swap.h"//�����Լ�д�ĺ���������
//�����ķ��ļ���д
//ʵ���������ֽ��н���
//void swap1(int a, int b);
//1.����.h��ͷ�ļ�
//2.����.cpp��Դ�ļ�
//3.��ͷ�ļ���д���������� ��Ҫ����һЩǰ׺
//4.��Դ�ļ���д�����Ķ��� ��Ҫincludeͷ�ļ�
int main()
{
	int a = 10;
	int b = 30;
	swap1(a, b);
	system("pause");
	return 0;
}

//void swap1(int a, int b)
//{
//
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//}
