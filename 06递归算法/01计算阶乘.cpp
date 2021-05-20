#include<iostream>
using namespace std;

// n! = n x (n-1)!
int factorial_Recursion(int n)  //利用递归
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

long factorial_Iteration(int n)  //利用迭代（即循环）
{
	long result = 1;  //用long类型来防止阶乘的值超出int型的范围
	for (int i = n; i > 0; i--)
	{
		result = result * i;
	}
	return result;
}

int main()
{
	int n = 5;

	cout << "递归：" << n << "! = " << factorial_Recursion(n) << endl;
	cout << "迭代：" << n << "! = " << factorial_Iteration(n) << endl;

	system("pause");

	return 0;
}