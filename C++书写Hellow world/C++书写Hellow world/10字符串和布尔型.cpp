#include<iostream>
#include<string>
using namespace std;

int main10()
{
//1��c�����ַ���
	//�����ַ��ͱ������������ţ�˫���ű�ʾ�ַ����������ű�ʾ�ַ�
	char a[] = "hello world";//char ������[]="�ַ�������"�����������Ų��������
	cout << "hello world " << endl;
	cout << a << endl;//���Խ��ظ�ʹ�õ���������Ϊ�������������ʹ��

	//2��c++�����ַ���
	//Ҫ����һ��ͷ�ļ�#include<string>�������ñ��ϰ��
	string str = "hello world";
	cout << str << endl;

	//3��������
	// true�����棨1����false����٣�0��;�����ֵ��ʾ��Ҳ���治�ܷ���
	bool flag = true;
	cout << "flag=" << flag << endl;
	flag = false;//���ﲻ��bool����Ϊflag֮ǰ�Ѿ�����Ϊbool�ͱ�����
	cout << "flag=" << flag << endl;
	cout << "bool�ͱ�����ռ�õ��ڴ�ռ�Ϊ" << sizeof(bool)<<endl;
	system("pause");
	return 0;
}