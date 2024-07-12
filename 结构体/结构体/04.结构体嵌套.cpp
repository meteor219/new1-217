#include<iostream>
using namespace std;

//定义老师的结构体
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
	struct student stu;//student要定义在老师之前
};
int main4()
{
	//创建老师
	student s = { "王五",18,90 };
	teacher m = { 1000,"老王",39,s };//或者用s.id，s.stu.name等输入数据
	cout << "老师的姓名：" << m.name << "老师的id：" << m.id << "老师的年龄：" << m.age << endl;
	cout << "学生的姓名：" << m.stu.name << "学生的年龄：" << m.stu.age << "学生的分数：" << m.stu.score << endl;

	system("pause");
	return 0;
}