/*First line of input reads an integer to select the coding challenge:

-Reading value '1' selects the coding-challenge 1 ( tests the ability to define a function and pass arguments by value.)

-Reading value '2' selects the coding challenge 2 (tests the ability to pass arguments by reference to a function)

Coding Challenge -1:

Define a function named "Maximum" that accepts two integers (pass by value) as arguments and returns the greatest of the two arguments.

Coding Challenge -2:

Define a function named "Swap" that accepts two integers (pass by reference) as arguments and swaps their value.*/

#include <iostream>
using namespace std;
int Maximum(int x, int y)
{
	int maxi=max(x,y);
	return maxi;
}
void Swap(int &x, int &y)
{
	swap(x,y);
}
int main()
{
	int test, a, b, r;
	cin >> test;
	cin >> a >> b;
	switch (test)
	{
	case 1:
		r = Maximum(a, b);
		cout << r;
		break;
	case 2:
		Swap(a, b);
		cout << a << " " << b;
		break;
	default:
		cout << "Invalid test option";
	}
	return 0;
}