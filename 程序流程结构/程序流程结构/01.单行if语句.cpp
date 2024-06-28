#include<iostream>
using namespace std;
//if(判断条件){条件满足 的执行语句}在外面就是条件不满足的执行语句
int main1()
{
	// 选择结构 if 语句
	//用户输入分数，如果分数大于605那么就可以上中国矿业大学，在屏幕上输出
	//1.用户输入分数
	int score = 0;
	cout << "欢迎来到2024年，高考分数填报预测平台" << endl;
	cout << "请输入您的高考分数：" << endl;
	cin >> score;

	//2.打印用户的分数
	cout << "您输入的分数为：" << score << endl;
	//3.判断是否为600分，并做出相对应的动作
	//if（）{}中间是不用加；的
	if (score >= 605)
	{
		cout << "恭喜您可以考上一本大学" << endl;

	};
	if (score < 605)
	{
		cout << "就算您没有考上一本大学，但是现在的好大学也还有这么多可以选择" << endl;
	}
	system("pause");
	return 0;
}