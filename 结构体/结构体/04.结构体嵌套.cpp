#include<iostream>
using namespace std;

//������ʦ�Ľṹ��
struct student
{
	string name;
	int age;
	int score;
};

struct teacher
{
	int id;
	string name;
	int age;
	struct student stu;//studentҪ��������ʦ֮ǰ
};
int main4()
{
	//������ʦ
	student s = { "����",18,90 };
	teacher m = { 1000,"����",39,s };//������s.id��s.stu.name����������
	cout << "��ʦ��������" << m.name << "��ʦ��id��" << m.id << "��ʦ�����䣺" << m.age << endl;
	cout << "ѧ����������" << m.stu.name << "ѧ�������䣺" << m.stu.age << "ѧ���ķ�����" << m.stu.score << endl;

	system("pause");
	return 0;
}