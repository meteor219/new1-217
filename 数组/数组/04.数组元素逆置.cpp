#include<iostream>
using namespace std;

int main4()
{
	int arr[] = { 1,3,2,5,4 };
	int start = 0;//��ʼԪ���±�λ��
	int end = sizeof(arr) / sizeof(arr[0]) - 1;//ĩβԪ���±�λ��
	for (int i = 0; i < sizeof(arr)/ sizeof(arr[0]) / 2; i++)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	};
	for (int j = 0; j < sizeof(arr)/ sizeof(arr[0]); j++) {
		cout << arr[j] << endl;

	}
	system("pause");
	return 0;
}