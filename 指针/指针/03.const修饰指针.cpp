#include<iostream>
using namespace std;

int main3()
{
	//const����ָ�����������

	//1��const����ָ��-- ����ָ��	
	//ָ��ָ���ֵ���ܸģ�ָ���ָ����Ը�
	int a = 10;
	int b = 10;
	const int* p = &a;
	//*p = 20; ����
	p = &b; //��ȷ
	
	//2.const���γ���--ָ�볣��
	//ָ���ָ���ܸģ�ָ��ָ���ֵ���Ը�
	int* const p2 = &a;
	*p2 = 39;//��ȷ
	//p2 = &b;����

	//3��const���γ�����ָ��
	const int* const p3 = &a;
	//�����ܸ�
	system("pause");
	return 0;
}