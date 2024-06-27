#include<iostream>
#include<string>
using namespace std;

int main()
{
	//1、整型输入
	int a = 0;
	cout << "请用户给整型变量a赋值" << endl;
	cin >> a;
	cout << "整型变量a为" << a << endl;
	////2、浮点型输入
	float b = 0;
	cout << "请给浮点型b赋值" << endl;
	cin >> b;
	cout << "浮点型变量b为" << b << endl;
	////3、字符型输入
	char c = '0';
	cout << "请给字符型变量c赋值" << endl;
	cin >> c;
	cout << "字符型变量c为" << c << endl;
	////4、字符串型输入
	string d = "000";
	cout << "请为字符串变量d赋值" << endl;
	cin >> d;
	cout << "字符串变量d为" << d << endl;
	//5、布尔型输入
	bool e = true;
	cout << "请为布尔型变量e赋值" << endl;
	cin >> e;//这里如果用cin输入 true或者 false都会被看成字符串，而字符串就会被视做0（false）
	cout << "布尔型变量e为" << e << endl;//并且自动忽略0.几的小数

	system("pause");
	return 0;
}