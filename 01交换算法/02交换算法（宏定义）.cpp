#include<iostream>
using namespace std;

#define SWAP(x,y,t)((t)=(x),(x)=(y),(y)=(t))

int main()
{
	int a = 1;
	int b = 10;
	int temp;

	cout << "交换前：" << endl;
	cout << "a = " << a << "\tb = " << b << endl;

	SWAP(a, b, temp);
	cout << "交换后：" << endl;
	cout << "a = " << a << "\tb = " << b << endl;

	system("pause");
	return 0;
}