#include<iostream>
using namespace std;
//if (条件1) {满足1执行的语句}else if (条件2) {不满足1但满足2执行}else if(条件3) {满足3执行}else{都不满足执行}
//else if 是已经排除了if里面的条件的条件
int main4()
{
	//选择结构 多条件if语句
	//输入一个分数，如果大于605则视为考上中国矿业大学
	//如果大于550则视为考上一本大学
	//如果大于470则视为考上二本大学
	//都为满足则视为未考上本科

	//1.用户输入
	cout << "请输入您的分数" << endl;
	int score = 0;
	//2.提示用户分数
	cin >> score;
	cout << "您的分数为：" << score << endl;

	//3.判断
	//如果大于605
	if (score >= 605)
	{
		cout << "恭喜您!这分数能够报上中国矿业大学" << endl;
	}
	//如果大于550
	else if (score > 550)
	{
		cout << "恭喜您能够上一本" << endl;
	}
	//如果大于470
	else if (score > 470)
	{
		cout << "您能够上二本院校" << endl;
	}
	//都未满足
	else {
		cout << "很遗憾您未能考上本科" << endl;
	}
	system("pause");
	return 0;

}