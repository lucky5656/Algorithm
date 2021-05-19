#include<iostream>
using namespace std;

int main()
{
	int a = 1073741824;  // 1073741824 = 0100 0000 0000 0000 0000 0000 0000 0000
	int b = 1073741824;
	// a + b = -2147483648 as signed   32-bit integer

	int result1 = (a + b) / 2;  // result1 = -1073741824
	int result2 = a + (b - a) / 2;  // result2 = 1073741824

	cout << "a：" << a << endl;
	cout << "b：" << b << endl;
	cout << "a+b：" << a + b << endl;
	cout << "(a+b)/2 的计算结果：" << result1 << endl;
	cout << "a+(b-a)/2 的计算结果：" << result2 << endl;

	system("pause");

	return 0;
}