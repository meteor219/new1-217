#include<iostream>
using namespace std;
#include<ctime>
struct student1
{
	string name;
	int score;

};
struct teacher1//��ͬ�����е�struct ��������ֲ������� ��mainһ��
{
	string name;
	student1 stu[5];
};
void allocate(teacher1 tea[], int len)//��һ������������飬����������׵�ַ��*p)
{
	//����ʦ��ֵ
	for (int i = 0; i < len; i++) {
		string nameseed = "ABCDE";
		tea[i].name = "teacher_";
		tea[i].name += nameseed[i];
		//��Ϊ����5��ѧ��������ͨ��ѭ���ٸ�ѧ����ֵ
		for (int j = 0; j < 5; j++)
		{
			tea[i].stu[j].name = "student_";
			tea[i].stu[j].name += nameseed[j];
			int random = rand() % 61 + 40;//Ϊ��0-60��+40
			tea[i].stu[j].score = random;


		}
	}
}
void printinfo(teacher1 tea[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "��ʦ��������" << tea[i].name<<endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t��ʦ����ѧ����������" << tea[i].stu[j].name <<
				"���Եķ�����" << tea[i].stu[j].score << endl;
		}
	}
}
int main7()
{
	//�����
	srand((unsigned int)time(NULL));
	//����3����ʦ������
	teacher1 tea[3];
	int len = sizeof(tea) / sizeof(tea[0]);
	allocate(tea, len);
	printinfo(tea, len);
	system("pause");
	return 0;
}