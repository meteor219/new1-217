#include<iostream>
using namespace std;

//ʵ���������ֽ��н���
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swap a=" << a << endl;
	cout << "swap b=" << b << endl;

}
void swap02(int *p1, int * p2)
{
	int temp = *p1;//��p1�д��ֵ�������ú������ʱ����
	*p1 = *p2;//��p2�еĽ����ú��ֵ������p1�еĵ�ַ
	*p2 = temp;
	cout << "swap02 a=" << *p1 << endl;
	cout << "swap02 b=" << *p2 << endl;

}
int main5()
{
	//ָ��ͺ���
	//1��ֵ����
	int a = 10;
	int b = 20;
	swap(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	
	//2����ַ����
	//����Ǵ��ݵĵ�ַ���ͻ�ı�ʵ�Σ���Ϊ��Ȼ��ַû�䵫���ں�������ı��˵�ַ��ָ ��ֵ
	swap02(&a, &b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	system("pause");
	return 0;
}