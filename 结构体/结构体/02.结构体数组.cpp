#include<iostream>
using namespace std;
//结构体数组
//1、定义一个结构体
struct student
{
	string name;
	int age;
	int score;
};

int main2()
{
	//2、创建一个结构体数组
	struct student stuarry[3] =
	{
		{"张三",18,100},
		{"李四",19,78},
		{"王五",20,89}
	};
//3、给结构体数组中元素赋值
	 stuarry[2].name = "赵六";
	 stuarry[2].age = 28;
	 stuarry[2].score = 98;

//4、遍历结构体数组
	 for (int i = 0; i < 3; i++)
	 {
		 cout << "姓名:" << stuarry[i].name << " 年龄：" << stuarry[i].age << " 分数："<<stuarry[i].score << endl;
	 }
	system("pause");
	return 0;
}