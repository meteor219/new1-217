#include<iostream>
using namespace std;

//һά��������;��ͳ�������������ڴ��еĳ��ȣ���ȡ�ڴ��е��׵�ַ
int main2()
{
	//ͨ���������鿴����������ռ�ڴ�
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "��������ռ�õ��ڴ�Ϊ��  " << sizeof(arr) << endl;
	cout << "һ��Ԫ����ռ���ڴ�Ϊ:   " << sizeof(arr[0]) << endl;
	cout << "������Ԫ�صĸ���Ϊ:  " << sizeof(arr) / sizeof(arr[0]) << endl;

	//��ȡ�ڴ��е��׵�ַ
	cout << "������׵�ַΪ�� " << arr << endl;//������ǰ���(int)arr,�Ϳ���ת��16������
	cout << "��һ��Ԫ�صĵ�ַΪ�� " << &arr[0] << endl;

	system("pause");
	return 0;
}