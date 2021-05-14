#include<iostream>
using namespace std;

int main()
{
	int a = 1;
	int b = 10;

	cout << "交换前：" << endl;
	cout << "a = " << a << "\tb = " << b << endl;

	std::swap(a, b);
	cout << "交换后：" << endl;
	cout << "a = " << a << "\tb = " << b << endl;

	system("pause");
	return 0;
}