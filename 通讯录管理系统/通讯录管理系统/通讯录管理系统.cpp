#include<iostream>

using namespace std;
const int  Max = 1000;
struct person
{
	string name;
	//性别：1代表男；2代表女；
	int sex;

	int age;

	string phoneNum;

	string addr;

 };
struct addressBook
{

	struct person personArray[Max];//创建通讯录数组

	int size;//记录人数

};
void showMenu()//显示用户菜单
{
	cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改联系人  *****" << endl;
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  0、退出通讯录  *****" << endl;
	cout << "***************************" << endl;

}
void addPerson(struct addressBook *abs)
{
	if(abs->size<1000)
	{
		cout << "请输入添加者的姓名" << endl;
		string name1;
		cin >> name1;
		abs->personArray[abs->size].name = name1;
		cout << "请输入添加者的姓别" << endl;
		cout << "1-----男" << endl;
		cout << "2-----女" << endl;
		int sex1;
		while (true) {
			cin >> sex1;
			//如果输入的是1或者2就退出循环，如果不是就重新输入
			if (sex1 == 1 || sex1 == 2)
			{
				abs->personArray[abs->size].sex = sex1;
				break;
			}
			else { cout << "请重新输入" << endl; }

		}
		cout << "请输入添加者的年龄" << endl;
		int age1;
		cin >> age1;
		abs->personArray[abs->size].age = age1;

		cout << "请输入添加者的电话" << endl;
		string phone1;
		cin >> phone1;
		abs->personArray[abs->size].phoneNum = phone1;

		cout << "请输入添加者的地址" << endl;
		string addr1;
		cin >> addr1;
		abs->personArray[abs->size].addr = addr1;
		abs->size++;

		cout << "添加成功！" << endl;
		system("pause");//请按任意键退出
		system("cls");//清屏的作用，因为在清屏后又回到主程序的循环中，所以又会显示菜单
	}
	else
	{
		cout << "不好意思通讯录成员已满，请删除后再添加！" << endl;
	}

}
//显示联系人函数
void showPerson(addressBook *abs)//虽然只是用于显示，可以用值传递，但是地址传递可以更省内存
{
	if (abs->size == 0) {
		cout << "当前通讯录成员为零！" << endl;
	}
	else {
		for (int i = 0; i < abs->size; i++)
		{
			cout << "姓名：" << abs->personArray[i].name << "\t"
				<< "性别：" <<( abs->personArray[i].sex == 1 ? "男": "女") << "\t"//在<<中要用三目运算符要加括号
				<< "年龄：" << abs->personArray[i].age << "\t"
				<< "号码：" << abs->personArray[i].phoneNum << "\t"
				<< "地址：" << abs->personArray[i].addr << endl;
		}

	}
	system("pause");
	system("cls");
}
//检测联系人是否存在,如果存在返回联系人所在数组中的下表，不存在放回-1
int isExist(addressBook *abs,string name)
{
	for (int i = 0; i < abs->size; i++)
	{
		if (abs->personArray[i].name == name)
		{
			return i;
		}
		
	}
	//如果在循环内部没找到，就返回-1
	return -1;
}
//删除指定联系人
void deletePerson (addressBook*abs)
{
	cout << "请输入您要删除的联系人" << endl;
	string dName;
	cin >> dName;
	//del==-1没找到
	//del！=-1查到了
	int del =isExist(abs, dName);//这里在deletePerson里输入的就是地址，可以不用取址符了
	if (del != -1)
	{
		//查到后，就要具体删除了
		for (int i = del; i < abs->size; i++)
		{
			//数据前移
			abs->personArray[i] = abs->personArray[i + 1];

		}
		abs->size--;//更新一下通讯录中的人员数
		cout << "删除成功！" << endl;
	}
	else
	{
		cout << "查无此人！" << endl;
	}
}
//查找联系人
void findPerson(addressBook*abs)
{
	cout << "请输入您要查找的联系人的姓名" << endl;
	string name;
	cin >> name;
	int fin;
	fin = isExist(abs,name);
	if (fin == -1)
	{
		cout << "查无此人！" << endl;
	}
	else
	{
		cout << "姓名：" << abs->personArray[fin].name << "\t";
		cout << "姓别：" << (abs->personArray[fin].sex==1 ? "男":"女") << "\t";
		cout << "年龄：" << abs->personArray[fin].age << "\t";
		cout << "号码：" << abs->personArray[fin].phoneNum << "\t";
		cout << "地址：" << abs->personArray[fin].addr <<endl;

	}
	system("pause");
	system("cls");
}
//修改联系人
void modifyPerson(addressBook *abs)
{
	cout << "请输入您要修改的联系人姓名" << endl;
	string  name;
	cin >> name;
	int mo =isExist(abs, name);
	if (mo == -1) {
		cout << "查无此人！" << endl;
	}
	else {
		cout << "请输入修改人姓名" << endl;
		cin >> abs->personArray[mo].name;

		cout << "请输入修改人性别" << endl;
		cout << "1---男" << endl;
		cout << "2---女" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[mo].age = sex;
				break;
			}
			else {
				cout << "输入有误请重新输入" << endl;
			}

		}
		cout << "请输入修改人年龄" << endl;
		cin >> abs->personArray[mo].age;


		cout << "请输入修改人号码" << endl;
		cin >> abs->personArray[mo].phoneNum;

		cout << "请输入修改人地址" << endl;
		cin >> abs->personArray[mo].addr;

	}
	system("pause");
	system("cls");
}
//清空所有联系人
void cleanPerson(addressBook* abs)
{
	abs->size = 0;//将联系人数量置为0，做逻辑上清空操作
	cout << "通讯录以清空" << endl;
	system("pause");
	system("cls");
}
int main()
{
	//创建一个通讯录
	addressBook abs;
	//初始化通讯录数据
	abs.size = 0;
	int select = 0;//创建一个用户选择的变量
	while (true)//！！！加一个一直返回显示界面的循环，知道0退出时才结束
	{
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1://添加联系人
			addPerson(&abs);
			break;
		case 2://显示联系人
			showPerson(&abs);
			break;
		case 3: //删除联系人//如果case中代码很长就要用中括号括起来
		
		//	cout << "请输入联系人姓名" << endl;
		//	string dName;
		//	cin >> dName;
		//	if (isExist(&abs, dName) == -1)
		//	{
		//		cout << "查无此人！" << endl;
		//	}
		//	else
		//	{
		//		cout << "查到此人！" << endl;
		//	}
		//	system("pause");
		//	system("cls");
		//}
			deletePerson(&abs);
			system("pause");
			system("cls");
			break;
		case 4: //查找联系人
			findPerson(&abs);
			break;
		case 5: //修改联系人
			modifyPerson(&abs);
			break;
		case 6: //清空联系人
			cleanPerson(&abs);
			break;
		case 0: //退出通讯录
			cout << "欢迎下次使用！" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}

	}
	system("pause");
	return 0;
}