#include<iostream>
using namespace std;
//��������ת��� goto flag;    flag:,,,
//һ�㲻����ʹ�ã����������ױ�
int main()
{
	cout << "1.xxxx" << endl;
	cout << "2.xxxx" << endl;
	goto flag;
	cout << "3.xxxx" << endl;
	cout << "4.xxxx" << endl;
	flag:
	cout << "5.xxxx" << endl;

system("pause");
return 0;
}