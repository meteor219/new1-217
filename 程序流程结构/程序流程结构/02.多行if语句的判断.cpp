#include<iostream>
using namespace std;
//if(条件){条件满足执行的语句}else{条件不满足执行的语句}
//不像上一个代码写的只用了两个if来写,占用内存大，但现在可以用if else

int main2()
{
	//选择结构中 多行if语句	int score = 0;
	int score = 10;
	cout << "欢迎来到2024年，高考分数填报预测平台" << endl;
	cout << "请输入您的高考分数：" << endl;
	cin >> score;

	//2.打印用户的分数
	cout << "您输入的分数为：" << score << endl;
	//3.判断是否为600分，并做出相对应的动作
	if (score >= 605)
	{
		cout << "恭喜您可以考上一本大学" << endl;

	}
	else
	{
		cout << "很遗憾您未能达到一本大学的分数线" << endl;
	}

	system("pause");
	return 0;

}