#include<iostream>
#include<ctime>
using namespace std;
//while ����ѭ����ִ�����
int main2()
{
	//���һ����������ӣ����õ�ǰϵͳ��ʱ���������������ֹÿһ�������һ��
	srand((unsigned int)time(NULL));
	//1.ϵͳ����һ�������
	int num = rand() % 100 + 1;//����һ��0-99�����������1���ͱ����1-100�������
	//cout << num << endl;
	// 2.��ҽ��в²�
	cout << " ���������µ�����" << endl;
	int �²��� = 0;
	int a = 0;
	while (a<7)
	{
		a += 1;
		cin >> �²���;
		// 3.�ж�
		if (�²��� > num)
		{
			cout << "���´���" << endl;
		}
		else if (�²��� < num)
		{
			cout << "���µ�С��" << endl;
		}
		else
		{
			cout << "��ϲ���¶��ˣ�" << endl;
			break;
		}
	}
	�²��� == num ? cout << "��Ϸ�ɹ���"<<endl : cout << "��Ϸʧ�ܣ�"<<endl;
	// 3.1�¶���  �˳�
	// 3.2�´��� ��ʾ�µĽ���������ǹ�С�����صڶ�������
	system("pause");
	return 0;
}