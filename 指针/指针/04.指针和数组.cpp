#include<iostream>
using namespace std;

int main4()
{
	//����ָ����������е�Ԫ��
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	cout << "��һ������Ԫ��Ϊ " << arr[0] << endl;

	int* p = arr;//arr����������׵�ַ
	cout << "����ָ�������ʵ�һ��Ԫ�� " << *p << endl;

	p++;//pָ��ͻ�����ƫ��4���ֽڣ���Ϊpָ�붨��ľ���int ��һ��ַ��ֱ�Ӽ�1*4
	cout << "����ָ�������ʵ�2��Ԫ�� " << *p << endl;
	cout << "����ָ���������������"<< endl;
	int* p2 = arr;
	for (int i = 0; i < 10; i++) {
		cout << "��" << i + 1 << "��Ԫ��Ϊ��" << *p2 << endl;
		p2++;

	}

	system("pause");
	return 0;
}