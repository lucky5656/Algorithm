#include<iostream>
using namespace std;

int main()
{
	int a = 1;
	int b = 10;

	cout << "����ǰ��" << endl;
	cout << "a = " << a << "\tb = " << b << endl;

	std::swap(a, b);
	cout << "������" << endl;
	cout << "a = " << a << "\tb = " << b << endl;

	system("pause");
	return 0;
}