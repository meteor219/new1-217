#include<iostream>
#include<string>
using namespace std;

int main()
{
	//1����������
	int a = 0;
	cout << "���û������ͱ���a��ֵ" << endl;
	cin >> a;
	cout << "���ͱ���aΪ" << a << endl;
	////2������������
	float b = 0;
	cout << "���������b��ֵ" << endl;
	cin >> b;
	cout << "�����ͱ���bΪ" << b << endl;
	////3���ַ�������
	char c = '0';
	cout << "����ַ��ͱ���c��ֵ" << endl;
	cin >> c;
	cout << "�ַ��ͱ���cΪ" << c << endl;
	////4���ַ���������
	string d = "000";
	cout << "��Ϊ�ַ�������d��ֵ" << endl;
	cin >> d;
	cout << "�ַ�������dΪ" << d << endl;
	//5������������
	bool e = true;
	cout << "��Ϊ�����ͱ���e��ֵ" << endl;
	cin >> e;//���������cin���� true���� false���ᱻ�����ַ��������ַ����ͻᱻ����0��false��
	cout << "�����ͱ���eΪ" << e << endl;//�����Զ�����0.����С��

	system("pause");
	return 0;
}