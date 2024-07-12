#include <iostream>
using namespace std;
int main3()
{
	//三目运算符
	//(表达式1)？（表达式2）：（表达式3）如果表达式1是真的就输出2，或者执行2，否则就输出3，，，
	//创建三个变量ABC

	//然后让AB作比较，将输出的值赋值给C
	int A = 30;
	int B = 20;
	int C = 0;
	(A > B ? C=A : C=B);
	//三目运算符输出的是变量的话，那这个变量也可以直接赋值
	(A > B ? A : B) = 100;
	cout << "A=" << A << endl;
	cout << "B=" << B << endl;
	cout << "C=" << C << endl;
	system("pause");
	return 0;
}