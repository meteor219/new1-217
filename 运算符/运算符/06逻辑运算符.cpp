#include<iostream>
using namespace std;

int main()
{
	//�߼��� ��
	int a = 10;//int ����С���Ļ����Զ�ʶ���0
	cout << !a << endl;
	cout << !!a << endl;//���Խ���0���������1

	//�߼��� && �൱�ڴ�����· ҪͬʱΪ�ߵ�ƽ1 ������Ǹߵ�ƽ1
	int b = 10;
	int c = 0;
	int d = 0;
	cout << (a && b) << endl;
	cout << (a && c) << endl;

	//�߼��� || �൱�ڲ��� ֻҪ��һ��Ϊ�ߵ�ƽ1 �����Ϊ�ߵ�ƽ1
	cout << (a || b) << endl;
	cout << (a || c) << endl;
	cout << (c || d) << endl;
	system("pause");
	return 0;
}