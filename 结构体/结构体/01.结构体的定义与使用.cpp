#include<iostream>
using namespace std;
//结构体是指用户自定义的数据类型，允许用户存储不同的数据类型
int main1()
{
	//struct 结构体名 {结构体成员列表}；
	//1、创建学生的数据类型；学生属性包括（姓名、年龄、分数）；通过不同的数据类型组合在一起
	struct student { string name; int age; int score; }s3;//顺便定义s3
	//2、通过学生类型，创建具体的学生

	//2.1 struct student s1，其中struct可以省
    student s1;
	//通过 。访问结构体的属性
	s1.name = "张三";
	s1.age = 18;
	s1.score = 93;
	cout << "姓名：" << s1.name << " 年龄：" << s1.age << " 分数:" << s1.score << endl;
	//2.1 struct student s2={。。。,。。。}
	struct student s2 = { "李四",19, 89, };
	cout << "姓名：" << s2.name << " 年龄：" << s2.age << " 分数:" << s2.score << endl;

	//2.3 在定义结构体时顺便创建结构体变量
	s3.name = "王五";
	s3.age = 18;
	s3.score = 100;
	cout << "姓名：" << s3.name << " 年龄：" << s3.age << " 分数:" << s3.score << endl;


	system("pause");
	return 0;
}