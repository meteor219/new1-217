#include<iostream>
using namespace std;

int main5()
{
	//����ð������ʵ����������
	int arr[] = { 4,2,8,0,5,7,1,3,9 };
	cout << "����ǰ" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << endl;
	};
	//����������ΪԪ�ظ�����һ
	for (int i = 0; i < 9 - 1; i++)
	{
		//�ڲ�ѭ���Ա���Ϊ��Ԫ�ظ�����ȥ��ǰ������1
		for (int j = 0; j < 9 - i - 1; j++)
		{
			int temp = arr[j];
			if (arr[j] > arr[j + 1]) 
			{
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}

		}
	}
	cout << "�����" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << endl;
	};


	system("pause");
	return 0;
}