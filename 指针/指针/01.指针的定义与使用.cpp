#include<iostream>
using namespace std;

int main1()
{
	//1������һ��ָ�� �������� *ָ������
	int a = 10;
	int* p;
	//��ָ�����a�ĵ�ַ &a &Ϊȡַ��
	p = &a;
	cout << "a�ĵ�ַΪ" << &a << endl;
	cout << "ָ��p=" << p << endl;

	//2�����ʹ��ָ��
	//����ͨ�������õķ�ʽ�ҵ�ָ��ָ���ڴ����洢�����ݣ� ָ��	ǰ����* ���������
	*p = 1000;
	cout << "a=" << a << endl;
	cout << "*p" << *p << endl;
	//3.ָ����ռ���ڴ�ռ� 
	//��64λ����ϵͳ��ռ8���ֽ�	
	//��32λ����ϵͳ��ռ4���ֽ�

	int c = 10;
	int* x = &c;
	cout << "sizeof int *=" << sizeof(x) << endl;//������ʲô�������͵�ָ�붼��8���ֽ�
	system("pause");
	return 0;
}