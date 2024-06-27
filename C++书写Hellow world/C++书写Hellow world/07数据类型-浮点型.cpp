#include<iostream>
using namespace std;
//浮点型数据类型
int main7()
{
	//1、float单精度（4字节） 2、double双精度（8字节）
	float f1 = 3.14f;
	//如果只输入3.14系统会把他自动识别成double类型，在算法中会多走一步转化，所以在后面加一个f
	
	cout << "f1等于" << f1 <<"所占的内存空间为"<<sizeof(f1) << endl;
	double d1 = 3.14;
	cout << "d1等于" << d1 << "所占的内存空间为" << sizeof(d1) << endl;
	//科学计数法
	float f2 = 3e2;
	float f3 = 3e-2;
	cout << "f2等于" << f2 << "所占的内存空间为" << sizeof(f2) << endl;
	cout << "f3等于" << f3 << "所占的内存空间为" << sizeof(f3) << endl;

	system("pause");
	return 0;
}