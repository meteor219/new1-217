#include<iostream>
using namespace std;

int main10()
{
	//break��ʹ��ʱ��
	//1��������Switch�����
	//cout << "�밴���ּ�ѡ�񸱱����Ѷ�" << endl;
	//cout << "1����ͨ" << endl;
	//cout << "2���е�" << endl;
	//cout << "3������" << endl;
	//int select = 0;//����һ��ѡ�����ı���
	//cin >> select;
	//switch (select)
	//{
	//case 1:
	//	cout << "��ѡ�������ͨ�Ѷ�" << endl;
	//	break;
	//case 2:
	//	cout << "��ѡ������е��Ѷ�" << endl;
	//	break;

	//case 3:
	//	cout << "��ѡ����������Ѷ�" << endl;
	//	break;

	//default:
	//	cout << "����������123ѡ���Ѷ�" << endl;
	//	break;

	//}
	//2��������ѭ�������
	for (int i = 0; i < 10; i++)
	{
		//��i����5ʱ�˳�ѭ��
		if (i == 5)
		{
			break;
		}		
		cout << i << endl;
	}
	//3��������Ƕ��ѭ���У����������һ��ѭ��

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j>i)
			{
				break;
			}
			cout << "* ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}