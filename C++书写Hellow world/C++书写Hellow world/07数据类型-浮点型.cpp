#include<iostream>
using namespace std;
//��������������
int main7()
{
	//1��float�����ȣ�4�ֽڣ� 2��double˫���ȣ�8�ֽڣ�
	float f1 = 3.14f;
	//���ֻ����3.14ϵͳ������Զ�ʶ���double���ͣ����㷨�л����һ��ת���������ں����һ��f
	
	cout << "f1����" << f1 <<"��ռ���ڴ�ռ�Ϊ"<<sizeof(f1) << endl;
	double d1 = 3.14;
	cout << "d1����" << d1 << "��ռ���ڴ�ռ�Ϊ" << sizeof(d1) << endl;
	//��ѧ������
	float f2 = 3e2;
	float f3 = 3e-2;
	cout << "f2����" << f2 << "��ռ���ڴ�ռ�Ϊ" << sizeof(f2) << endl;
	cout << "f3����" << f3 << "��ռ���ڴ�ռ�Ϊ" << sizeof(f3) << endl;

	system("pause");
	return 0;
}