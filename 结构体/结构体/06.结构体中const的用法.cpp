#include<iostream>
using namespace std;

struct student
{
	string name;
	int age;
	int score;

};
void printstudent(const student *p)
//将输入进函数的地址加一个const常量指针 防止误操作改变原来的值
//用地址传递可以减少传递时使用的内存空间，而且不会创造一个新的形参，减少错误的可能
{
	cout << "子函数2中学生信息，姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;
}
int main6()
{
	struct student s = { "张三",23,90 };

	printstudent(&s);
	system("pause");
	return 0;
}