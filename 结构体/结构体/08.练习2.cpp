#include<iostream>
using namespace std;

//1������Ӣ�۵Ľṹ��

struct hero
{
	string name;
	int age;
	string sex;
};
void bubbleSort(hero heroArray [],int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;

			}
		}
	}

}

int main()
{

	//2������������5��Ӣ��
	hero heroArray[5] = {
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"},

	};
	//3����������н�������
	int len = sizeof(heroArray) / sizeof(heroArray[0]);

	bubbleSort(heroArray,len);

	//4���������Ľ����ӡ
	for (int i = 0; i < len; i++)
	{
		cout << "����" << heroArray[i].name << "����" << heroArray[i].age
			<< "�Ա�" << heroArray[i].sex << endl;
	}

	system("pause");
	return 0;
}