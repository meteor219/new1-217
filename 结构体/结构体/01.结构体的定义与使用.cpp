#include<iostream>
using namespace std;
//�ṹ����ָ�û��Զ�����������ͣ������û��洢��ͬ����������
int main1()
{
	//struct �ṹ���� {�ṹ���Ա�б�}��
	//1������ѧ�����������ͣ�ѧ�����԰��������������䡢��������ͨ����ͬ���������������һ��
	struct student { string name; int age; int score; }s3;//˳�㶨��s3
	//2��ͨ��ѧ�����ͣ����������ѧ��

	//2.1 struct student s1������struct����ʡ
    student s1;
	//ͨ�� �����ʽṹ�������
	s1.name = "����";
	s1.age = 18;
	s1.score = 93;
	cout << "������" << s1.name << " ���䣺" << s1.age << " ����:" << s1.score << endl;
	//2.1 struct student s2={������,������}
	struct student s2 = { "����",19, 89, };
	cout << "������" << s2.name << " ���䣺" << s2.age << " ����:" << s2.score << endl;

	//2.3 �ڶ���ṹ��ʱ˳�㴴���ṹ�����
	s3.name = "����";
	s3.age = 18;
	s3.score = 100;
	cout << "������" << s3.name << " ���䣺" << s3.age << " ����:" << s3.score << endl;


	system("pause");
	return 0;
}