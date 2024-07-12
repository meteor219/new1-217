#include<iostream>

using namespace std;
const int  Max = 1000;
struct person
{
	string name;
	//�Ա�1�����У�2����Ů��
	int sex;

	int age;

	string phoneNum;

	string addr;

 };
struct addressBook
{

	struct person personArray[Max];//����ͨѶ¼����

	int size;//��¼����

};
void showMenu()//��ʾ�û��˵�
{
	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳�ͨѶ¼  *****" << endl;
	cout << "***************************" << endl;

}
void addPerson(struct addressBook *abs)
{
	if(abs->size<1000)
	{
		cout << "����������ߵ�����" << endl;
		string name1;
		cin >> name1;
		abs->personArray[abs->size].name = name1;
		cout << "����������ߵ��ձ�" << endl;
		cout << "1-----��" << endl;
		cout << "2-----Ů" << endl;
		int sex1;
		while (true) {
			cin >> sex1;
			//����������1����2���˳�ѭ����������Ǿ���������
			if (sex1 == 1 || sex1 == 2)
			{
				abs->personArray[abs->size].sex = sex1;
				break;
			}
			else { cout << "����������" << endl; }

		}
		cout << "����������ߵ�����" << endl;
		int age1;
		cin >> age1;
		abs->personArray[abs->size].age = age1;

		cout << "����������ߵĵ绰" << endl;
		string phone1;
		cin >> phone1;
		abs->personArray[abs->size].phoneNum = phone1;

		cout << "����������ߵĵ�ַ" << endl;
		string addr1;
		cin >> addr1;
		abs->personArray[abs->size].addr = addr1;
		abs->size++;

		cout << "��ӳɹ���" << endl;
		system("pause");//�밴������˳�
		system("cls");//���������ã���Ϊ���������ֻص��������ѭ���У������ֻ���ʾ�˵�
	}
	else
	{
		cout << "������˼ͨѶ¼��Ա��������ɾ��������ӣ�" << endl;
	}

}
//��ʾ��ϵ�˺���
void showPerson(addressBook *abs)//��Ȼֻ��������ʾ��������ֵ���ݣ����ǵ�ַ���ݿ��Ը�ʡ�ڴ�
{
	if (abs->size == 0) {
		cout << "��ǰͨѶ¼��ԱΪ�㣡" << endl;
	}
	else {
		for (int i = 0; i < abs->size; i++)
		{
			cout << "������" << abs->personArray[i].name << "\t"
				<< "�Ա�" <<( abs->personArray[i].sex == 1 ? "��": "Ů") << "\t"//��<<��Ҫ����Ŀ�����Ҫ������
				<< "���䣺" << abs->personArray[i].age << "\t"
				<< "���룺" << abs->personArray[i].phoneNum << "\t"
				<< "��ַ��" << abs->personArray[i].addr << endl;
		}

	}
	system("pause");
	system("cls");
}
//�����ϵ���Ƿ����,������ڷ�����ϵ�����������е��±������ڷŻ�-1
int isExist(addressBook *abs,string name)
{
	for (int i = 0; i < abs->size; i++)
	{
		if (abs->personArray[i].name == name)
		{
			return i;
		}
		
	}
	//�����ѭ���ڲ�û�ҵ����ͷ���-1
	return -1;
}
//ɾ��ָ����ϵ��
void deletePerson (addressBook*abs)
{
	cout << "��������Ҫɾ������ϵ��" << endl;
	string dName;
	cin >> dName;
	//del==-1û�ҵ�
	//del��=-1�鵽��
	int del =isExist(abs, dName);//������deletePerson������ľ��ǵ�ַ�����Բ���ȡַ����
	if (del != -1)
	{
		//�鵽�󣬾�Ҫ����ɾ����
		for (int i = del; i < abs->size; i++)
		{
			//����ǰ��
			abs->personArray[i] = abs->personArray[i + 1];

		}
		abs->size--;//����һ��ͨѶ¼�е���Ա��
		cout << "ɾ���ɹ���" << endl;
	}
	else
	{
		cout << "���޴��ˣ�" << endl;
	}
}
//������ϵ��
void findPerson(addressBook*abs)
{
	cout << "��������Ҫ���ҵ���ϵ�˵�����" << endl;
	string name;
	cin >> name;
	int fin;
	fin = isExist(abs,name);
	if (fin == -1)
	{
		cout << "���޴��ˣ�" << endl;
	}
	else
	{
		cout << "������" << abs->personArray[fin].name << "\t";
		cout << "�ձ�" << (abs->personArray[fin].sex==1 ? "��":"Ů") << "\t";
		cout << "���䣺" << abs->personArray[fin].age << "\t";
		cout << "���룺" << abs->personArray[fin].phoneNum << "\t";
		cout << "��ַ��" << abs->personArray[fin].addr <<endl;

	}
	system("pause");
	system("cls");
}
//�޸���ϵ��
void modifyPerson(addressBook *abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ������" << endl;
	string  name;
	cin >> name;
	int mo =isExist(abs, name);
	if (mo == -1) {
		cout << "���޴��ˣ�" << endl;
	}
	else {
		cout << "�������޸�������" << endl;
		cin >> abs->personArray[mo].name;

		cout << "�������޸����Ա�" << endl;
		cout << "1---��" << endl;
		cout << "2---Ů" << endl;
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
				cout << "������������������" << endl;
			}

		}
		cout << "�������޸�������" << endl;
		cin >> abs->personArray[mo].age;


		cout << "�������޸��˺���" << endl;
		cin >> abs->personArray[mo].phoneNum;

		cout << "�������޸��˵�ַ" << endl;
		cin >> abs->personArray[mo].addr;

	}
	system("pause");
	system("cls");
}
//���������ϵ��
void cleanPerson(addressBook* abs)
{
	abs->size = 0;//����ϵ��������Ϊ0�����߼�����ղ���
	cout << "ͨѶ¼�����" << endl;
	system("pause");
	system("cls");
}
int main()
{
	//����һ��ͨѶ¼
	addressBook abs;
	//��ʼ��ͨѶ¼����
	abs.size = 0;
	int select = 0;//����һ���û�ѡ��ı���
	while (true)//��������һ��һֱ������ʾ�����ѭ����֪��0�˳�ʱ�Ž���
	{
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1://�����ϵ��
			addPerson(&abs);
			break;
		case 2://��ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3: //ɾ����ϵ��//���case�д���ܳ���Ҫ��������������
		
		//	cout << "��������ϵ������" << endl;
		//	string dName;
		//	cin >> dName;
		//	if (isExist(&abs, dName) == -1)
		//	{
		//		cout << "���޴��ˣ�" << endl;
		//	}
		//	else
		//	{
		//		cout << "�鵽���ˣ�" << endl;
		//	}
		//	system("pause");
		//	system("cls");
		//}
			deletePerson(&abs);
			system("pause");
			system("cls");
			break;
		case 4: //������ϵ��
			findPerson(&abs);
			break;
		case 5: //�޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6: //�����ϵ��
			cleanPerson(&abs);
			break;
		case 0: //�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ�ã�" << endl;
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