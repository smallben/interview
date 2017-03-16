//What's output, C++

#include <iostream>
using namespace::std;

//call by reference
int fib(int n, int &c)
{
	++c;
	if (n == 1 || n == 2)
	{
		return 1;
	}
	return fib(n-1, c) + fib(n - 2, c);
}

//This is call by reference. But use the same address with the void function
int main(int argc, char *argv[])
{
	int y = 0;
	fib(5, y);
	cout << y << endl;
	return 0;
}
