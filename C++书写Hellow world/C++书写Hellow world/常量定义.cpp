#include <iostream>
using namespace std;


//�����Ķ��壺
//��һ�֣�#define ������ ��һ���ڴ����ʼ��λ�ö��壩
//�ڶ��֣�const ���εı���
#define Day 7
int main1()
//main��һ����Ŀ��䵱��ڵĽ�ɫ
//����ֻ�ܳ���һ��������Դ�ļ�ֻ����main1��main2����
//���Ҫ������һ���ӳ���Ϳ��԰�ǰһ�����е�main�ĳ�main1������Ҫ���еĳ����е�main1�ĳ�main
{
	cout << "һ��һ����" << Day << "��" << endl;

	const int month = 12;//const���εı���Ҳ�ǳ����������ٽ����޸ġ�
	cout << "һ����" << month << "���·�" << endl;
	system("pause");
	return 0;
}