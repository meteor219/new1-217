#include<iostream>
using namespace std;
//��if����{}���ټ�if��ʵ��Ƕ��if���
int main()
{
	//ѡ��ṹ ������if���
	//����һ���������������605����Ϊ�����й���ҵ��ѧ
	//�������550����Ϊ����һ����ѧ
	//�������470����Ϊ���϶�����ѧ
	//��Ϊ��������Ϊδ���ϱ���

	//1.�û�����
	cout << "���������ķ���" << endl;
	int score = 0;
	//2.��ʾ�û�����
	cin >> score;
	cout << "���ķ���Ϊ��" << score << endl;

	//3.�ж�
	//�������600
	if (score >= 600)
	{
		cout << "��ϲ��!������ܹ����Ϻô�ѧ" << endl;
		if(score>=700)
		{
			cout << "���ܿ����廪����" << endl;
		}
		else if(score>=660)
		{
			cout << "���ܿ���c9��ѧ" << endl;
		}
		else if (score>620)
		{
			cout << "���ܿ���985" << endl;
		}
		else 
		{
			cout << "���ֻ���Ͽ�����" << endl;
		}
	}
	//�������550
	else if (score > 550)
	{
		cout << "��ϲ���ܹ���һ��" << endl;
	}
	//�������470
	else if (score > 470)
	{
		cout << "���ܹ��϶���ԺУ" << endl;
	}
	//��δ����
	else {
		cout << "���ź���δ�ܿ��ϱ���" << endl;
	}
	system("pause");
	return 0;

}