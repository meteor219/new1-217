#include<iostream>
using namespace std;

//����һ��ѧ���Ľṹ��
struct student
{
	string name;
	int age;
	int score;
};
//��ӡѧ����Ϣ����
//1.ֵ����
void printstudent1(student i)
{
	i.age = 100;
	cout << "�Ӻ���1��ѧ����Ϣ��������" << i.name << " ���䣺" << i.age << " ������" << i.score << endl;
};
//2.��ַ����
void printstudent2(student* p)
{
	p->age = 70;
	cout << "�Ӻ���2��ѧ����Ϣ��������" << p->name << " ���䣺" << p->age << " ������" << p->score << endl;

}
int main5()
{
	//��ѧ�����뵽�����У���ӡѧ����������Ϣ
	student s = { "����",18,67 };
	printstudent1(s);
	printstudent2(&s);
	cout << "main�����д�ӡ��ѧ����Ϣ" << endl;
	cout << "ѧ������:" << s.name << " ����:" << s.age << " ������" << s.score << endl;


	system("pause");
	return 0;
}