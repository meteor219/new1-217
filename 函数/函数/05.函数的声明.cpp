#include<iostream>
using namespace std;

//函数的声明，但是2022他可以自己识别,又不行了，，，
int max(int a, int b);
//比较函数，比较两个数返回大值

int main5 ()
{
	int a = 10;
	int b = 30;
	cout <<max(a, b)<<endl;
	system("pause");
	return 0;
}
int max(int a, int b)
{
	return a > b ? a : b;
}