#include<iostream>
using namespace std;

void swap(int *p1, int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main()
{
	int a = 1;
	int b = 10;

	cout << "交换前：" << endl;
	cout << "a = " << a << "\tb = " << b << endl;

	swap(&a, &b);
	cout << "交换后：" << endl;
	cout << "a = " << a << "\tb = " << b << endl;

	system("pause");
	return 0;
}