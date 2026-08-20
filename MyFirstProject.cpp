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

int main()
{
    
	int Number1 = ReadNumber("Enter first number1 => ");
	int Number2 = ReadNumber("Enter second number2 => ");
	cout << "\nSum of two numbers : "<<AddNumbers(Number1, Number2)	 << endl;
	
	return 0;
}

