#include<iostream>
using namespace std;
#include<ctime>
struct student1
{
	string name;
	int score;

};
struct teacher1//不同程序中的struct 后面的名字不能起重 和main一样
{
	string name;
	student1 stu[5];
};
void allocate(teacher1 tea[], int len)//第一个输入的是数组，不是数组的首地址（*p)
{
	//给老师赋值
	for (int i = 0; i < len; i++) {
		string nameseed = "ABCDE";
		tea[i].name = "teacher_";
		tea[i].name += nameseed[i];
		//因为带来5名学生，所以通过循环再给学生赋值
		for (int j = 0; j < 5; j++)
		{
			tea[i].stu[j].name = "student_";
			tea[i].stu[j].name += nameseed[j];
			int random = rand() % 61 + 40;//为（0-60）+40
			tea[i].stu[j].score = random;


		}
	}
}
void printinfo(teacher1 tea[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师的姓名：" << tea[i].name<<endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t老师带的学生的姓名：" << tea[i].stu[j].name <<
				"考试的分数：" << tea[i].stu[j].score << endl;
		}
	}
}
int main7()
{
	//随机数
	srand((unsigned int)time(NULL));
	//创建3名老师的数组
	teacher1 tea[3];
	int len = sizeof(tea) / sizeof(tea[0]);
	allocate(tea, len);
	printinfo(tea, len);
	system("pause");
	return 0;
}