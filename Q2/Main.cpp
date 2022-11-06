/* Write a program to find the factorial of a given number using pointers. */


#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	long* ptr;
	long factorial = 1;
	ptr = &factorial;

	cout << "Enter a number: ";
	cin >> n;

	if (n == 1)
		cout << "The factorial value of " << n << " is 1";
	if (n == 2)
		cout << "The factorial value of " << n << " is 2";

	for (int i = 1; i <= n; i++)
	{
		factorial *= i;
	}

	cout << "The factorial value of " << n << " is " << *ptr << endl;

	return 0;
}