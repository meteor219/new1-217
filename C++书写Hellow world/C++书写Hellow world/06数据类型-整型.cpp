#include<iostream>
using namespace std;

//c++�ڴ���һ���������߳���ʱ������������趨�����������������ڴ棻
//����Ҫ��˵����������ʱ���������ͣ����������ڴ�ռ䣻
//short 2�ֽ�(-2^15;2^15-1)��int4�ֽ�(-2^31;2^31-1)��long4�ֽڣ�longlong8�ֽ�
int main4()
{
	short num1 = 10;
	int num2 = 10;
	long num3 = 10;
	long long num4 = 10;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	cout << "num3=" << num3 << endl;
	cout << "num4=" << num4 << endl;
	//sizeof��ʹ��
	//sizeof����ֱ�ӵó��������͵���ռ���ڴ�ռ�
	//sizeof���������͡���������
	cout << num1 <<"num1�ڴ�ռ�Ϊ" << sizeof(num1) << sizeof(short) << endl;
	system("pause");
	return 0;
}