#include <iostream>
using namespace std;
int main4()
{
	//电影打分 10-9分：经典电影，8-7：非常好，6-5：一般，5一以下:烂片
	//1.提示用户进行打分
	cout << "请给电影进行打分" << endl;
	//2.输入分数
	int score = 0;
	cin >> score;
	cout << "您打的分数为：" << score << endl;
	//3.根据用户输入的分数，输出结果
	switch (score)//缺点在判断时只能是整型或者字符型，不能判断区间
		//优点 结构清晰，执行效率高 
	{
	case (10):
		cout << "您认为是经典电影" << endl;
		break;
	case(9):
		cout << "您认为是经典电影" << endl;
		break;
	case (8):
		cout << "您认为是非常好的电影" << endl;
		break;
	case(7):
		cout << "您认为是非常好的电影" << endl;
		break;
	case (6):
		cout << "您认为是一般电影" << endl;
		break;
	case(5):
		cout << "您认为是一般电影" << endl;
		break;
	default:
		cout << "您认为是烂片" << endl;
		break;

		//default:; break;
	}

	system("pause");
	return 0;
}
//switch语句判断
//switch（表达式），根据表达式最终的结果不同执行不同的case 都没有就执行default
/*{
case 结果1  ：执行1；break；
...
default：执行n；break；
}
*/