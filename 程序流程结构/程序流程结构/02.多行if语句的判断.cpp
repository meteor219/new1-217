#include<iostream>
using namespace std;
//if(����){��������ִ�е����}else{����������ִ�е����}
//������һ������д��ֻ��������if��д,ռ���ڴ�󣬵����ڿ�����if else

int main2()
{
	//ѡ��ṹ�� ����if���	int score = 0;
	int score = 10;
	cout << "��ӭ����2024�꣬�߿������Ԥ��ƽ̨" << endl;
	cout << "���������ĸ߿�������" << endl;
	cin >> score;

	//2.��ӡ�û��ķ���
	cout << "������ķ���Ϊ��" << score << endl;
	//3.�ж��Ƿ�Ϊ600�֣����������Ӧ�Ķ���
	if (score >= 605)
	{
		cout << "��ϲ�����Կ���һ����ѧ" << endl;

	}
	else
	{
		cout << "���ź���δ�ܴﵽһ����ѧ�ķ�����" << endl;
	}

	system("pause");
	return 0;

}