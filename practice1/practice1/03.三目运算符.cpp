#include <iostream>
using namespace std;
int main3()
{
	//��Ŀ�����
	//(���ʽ1)�������ʽ2���������ʽ3��������ʽ1����ľ����2������ִ��2����������3������
	//������������ABC

	//Ȼ����AB���Ƚϣ��������ֵ��ֵ��C
	int A = 30;
	int B = 20;
	int C = 0;
	(A > B ? C=A : C=B);
	//��Ŀ�����������Ǳ����Ļ������������Ҳ����ֱ�Ӹ�ֵ
	(A > B ? A : B) = 100;
	cout << "A=" << A << endl;
	cout << "B=" << B << endl;
	cout << "C=" << C << endl;
	system("pause");
	return 0;
}