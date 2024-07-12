#include<iostream>
using namespace std;

//定义一个学生的结构体
struct student
{
	string name;
	int age;
	int score;
};
//打印学生信息函数
//1.值传递
void printstudent1(student i)
{
	i.age = 100;
	cout << "子函数1中学生信息，姓名：" << i.name << " 年龄：" << i.age << " 分数：" << i.score << endl;
};
//2.地址传递
void printstudent2(student* p)
{
	p->age = 70;
	cout << "子函数2中学生信息，姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;

}
int main5()
{
	//将学生传入到参数中，打印学生的所有信息
	student s = { "张三",18,67 };
	printstudent1(s);
	printstudent2(&s);
	cout << "main函数中打印的学生信息" << endl;
	cout << "学生姓名:" << s.name << " 年龄:" << s.age << " 分数：" << s.score << endl;


	system("pause");
	return 0;
}