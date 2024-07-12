#include<iostream>
#include<ctime>
using namespace std;
//while 是先循环再执行语句
int main2()
{
	//添加一个随机数种子，利用当前系统的时间生成随机数，防止每一个随机数一样
	srand((unsigned int)time(NULL));
	//1.系统生成一个随机数
	int num = rand() % 100 + 1;//生成一个0-99的随机数，加1，就变成了1-100的随机数
	//cout << num << endl;
	// 2.玩家进行猜测
	cout << " 请打出您所猜的数字" << endl;
	int 猜测数 = 0;
	int a = 0;
	while (a<7)
	{
		a += 1;
		cin >> 猜测数;
		// 3.判断
		if (猜测数 > num)
		{
			cout << "您猜大了" << endl;
		}
		else if (猜测数 < num)
		{
			cout << "您猜的小了" << endl;
		}
		else
		{
			cout << "恭喜您猜对了！" << endl;
			break;
		}
	}
	猜测数 == num ? cout << "游戏成功！"<<endl : cout << "游戏失败！"<<endl;
	// 3.1猜对了  退出
	// 3.2猜错了 提示猜的结果，过大还是过小，返回第二步继续
	system("pause");
	return 0;
}