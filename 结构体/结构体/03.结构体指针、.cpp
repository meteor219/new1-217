#include<iostream>
using namespace std;

struct student
{
	string name;
	int age;
	int score;
};
int main3()
{
	student s = { "����",18,100 };

	student* p = &s;

	cout << "������" << p->name << " ���䣺" << p->age << " ������" << p->score << endl;
	system("pause");
	return 0;
}