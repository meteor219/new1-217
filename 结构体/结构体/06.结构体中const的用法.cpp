#include<iostream>
using namespace std;

struct student
{
	string name;
	int age;
	int score;

};
void printstudent(const student *p)
//������������ĵ�ַ��һ��const����ָ�� ��ֹ������ı�ԭ����ֵ
//�õ�ַ���ݿ��Լ��ٴ���ʱʹ�õ��ڴ�ռ䣬���Ҳ��ᴴ��һ���µ��βΣ����ٴ���Ŀ���
{
	cout << "�Ӻ���2��ѧ����Ϣ��������" << p->name << " ���䣺" << p->age << " ������" << p->score << endl;
}
int main6()
{
	struct student s = { "����",23,90 };

	printstudent(&s);
	system("pause");
	return 0;
}