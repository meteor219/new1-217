#include<iostream>
using namespace std;
//�ṹ������
//1������һ���ṹ��
struct student
{
	string name;
	int age;
	int score;
};

int main2()
{
	//2������һ���ṹ������
	struct student stuarry[3] =
	{
		{"����",18,100},
		{"����",19,78},
		{"����",20,89}
	};
//3�����ṹ��������Ԫ�ظ�ֵ
	 stuarry[2].name = "����";
	 stuarry[2].age = 28;
	 stuarry[2].score = 98;

//4�������ṹ������
	 for (int i = 0; i < 3; i++)
	 {
		 cout << "����:" << stuarry[i].name << " ���䣺" << stuarry[i].age << " ������"<<stuarry[i].score << endl;
	 }
	system("pause");
	return 0;
}