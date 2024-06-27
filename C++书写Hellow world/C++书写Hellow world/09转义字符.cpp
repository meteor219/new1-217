#include<iostream>
using namespace std;

int main9()
{
	//转义字符

	//换行符\n
	cout << "hello world\n";
	//反斜杠\\

	cout << "\\"<<endl; 
	//水平制表符\t,占8个位置
	cout << "aaaaaaa\thello world"<<endl;//如果超过8个字符，就重新再算8个位置
	cout << "aaaaaa\thello world"<<endl;
	cout << "aaaa\thello world"<<endl;//可以让8字符后面的内容对齐
	system("pause");
	return 0;
}