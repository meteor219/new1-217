#include<iostream>
using namespace std;

//1、创建英雄的结构体

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

	//2、创建数组存放5名英雄
	hero heroArray[5] = {
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},

	};
	//3、对数组进行降序排列
	int len = sizeof(heroArray) / sizeof(heroArray[0]);

	bubbleSort(heroArray,len);

	//4、将排序后的结果打印
	for (int i = 0; i < len; i++)
	{
		cout << "姓名" << heroArray[i].name << "年龄" << heroArray[i].age
			<< "性别" << heroArray[i].sex << endl;
	}

	system("pause");
	return 0;
}