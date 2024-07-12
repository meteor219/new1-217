#include<iostream>
using namespace std;

void bubblesort(int *p,int len)
{
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len-i-1; j++) {
			int num = 0;
			if (p[j]> p[j+1])//指针p也可以用[0]表示此时指针位置，p[1]表示指针厚一个位置
			{
				num = p[j];
				p[j] = p[j+1];
				p[j+1] = num;
			}
			
		}
	}
}
int main()
{
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5, };
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	bubblesort(arr, len);
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	system("pause");
	return 0;
}