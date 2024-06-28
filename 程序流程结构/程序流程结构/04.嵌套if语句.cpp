#include<iostream>
using namespace std;
//在if（）{}中再加if，实现嵌套if语句
int main()
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
	//如果大于600
	if (score >= 600)
	{
		cout << "恭喜您!这分数能够报上好大学" << endl;
		if(score>=700)
		{
			cout << "你能考上清华北大" << endl;
		}
		else if(score>=660)
		{
			cout << "你能考上c9大学" << endl;
		}
		else if (score>620)
		{
			cout << "你能考上985" << endl;
		}
		else 
		{
			cout << "你就只能上抗大啦" << endl;
		}
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