#include<iostream>
using namespace std;

int main5()
{
	//利用冒泡排序实现生序序列
	int arr[] = { 4,2,8,0,5,7,1,3,9 };
	cout << "排序前" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << endl;
	};
	//总排序轮数为元素个数减一
	for (int i = 0; i < 9 - 1; i++)
	{
		//内层循环对比数为，元素个数减去当前轮数－1
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
	cout << "排序后" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << endl;
	};


	system("pause");
	return 0;
}