#pragma warning(disable: 4996)
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <vector>
#include <cctype>
#include <fstream>
#include <ctime>

using namespace std;


int ReadNumber(string Message)
{
	int number=0;
	cout << Message;
	cin>> number;
	return number;
}
int AddNumbers(int a, int b)
{
	int sum = 0;
	sum = a + b;
	return sum;
}
void PrintSumResult(int sum, int a, int b)
{
	cout << "\nThe sum of " << a << " and " << b << " is : " << sum << endl;
}

int main()
{
	int *Number1, *Number2;
	Number1 = new int;
	Number2 = new int;
	*Number1 = ReadNumber("Enter first number1 => ");
	*Number2 = ReadNumber("Enter second number2 => ");
	PrintSumResult(AddNumbers(*Number1, *Number2), *Number1, *Number2);
	delete Number1;
	delete Number2;
	return 0;
}

