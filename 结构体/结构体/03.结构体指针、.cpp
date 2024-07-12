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
	student s = { "张三",18,100 };

	student* p = &s;

	cout << "姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;
	system("pause");
	return 0;
}