#include <iostream>
using namespace std;
int main4()
{
	//��Ӱ��� 10-9�֣������Ӱ��8-7���ǳ��ã�6-5��һ�㣬5һ����:��Ƭ
	//1.��ʾ�û����д��
	cout << "�����Ӱ���д��" << endl;
	//2.�������
	int score = 0;
	cin >> score;
	cout << "����ķ���Ϊ��" << score << endl;
	//3.�����û�����ķ�����������
	switch (score)//ȱ�����ж�ʱֻ�������ͻ����ַ��ͣ������ж�����
		//�ŵ� �ṹ������ִ��Ч�ʸ� 
	{
	case (10):
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;
	case(9):
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;
	case (8):
		cout << "����Ϊ�Ƿǳ��õĵ�Ӱ" << endl;
		break;
	case(7):
		cout << "����Ϊ�Ƿǳ��õĵ�Ӱ" << endl;
		break;
	case (6):
		cout << "����Ϊ��һ���Ӱ" << endl;
		break;
	case(5):
		cout << "����Ϊ��һ���Ӱ" << endl;
		break;
	default:
		cout << "����Ϊ����Ƭ" << endl;
		break;

		//default:; break;
	}

	system("pause");
	return 0;
}
//switch����ж�
//switch�����ʽ�������ݱ��ʽ���յĽ����ִͬ�в�ͬ��case ��û�о�ִ��default
/*{
case ���1  ��ִ��1��break��
...
default��ִ��n��break��
}
*/