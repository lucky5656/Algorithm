#include<iostream>
using namespace std;

// n! = n x (n-1)!
int factorial_Recursion(int n)  //���õݹ�
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n * factorial_Recursion(n - 1);
	}
}

long factorial_Iteration(int n)  //���õ�������ѭ����
{
	long result = 1;  //��long��������ֹ�׳˵�ֵ����int�͵ķ�Χ
	for (int i = n; i > 0; i--)
	{
		result = result * i;
	}
	return result;
}

int main()
{
	int n = 5;

	cout << "�ݹ飺" << n << "! = " << factorial_Recursion(n) << endl;
	cout << "������" << n << "! = " << factorial_Iteration(n) << endl;

	system("pause");

	return 0;
}