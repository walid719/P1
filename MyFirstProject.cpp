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

enum enOperation
{
	Add = 1,
	Subtract = 2,
	Multiply = 3,
	Divide = 4
};

int ReadNumber(string Message)
{
	int number=0;
	cout << Message;
	cin>> number;
	return number;
}

int ReadOperation()
{
	int operation;
	cout << "\nChoose the operation you want to perform: " << endl;
	cout << "1. Add" << endl;
	cout << "2. Subtract" << endl;
	cout << "3. Multiply" << endl;
	cout << "4. Divide" << endl;	
	cout << "Enter your choice (1-4): ";
	cout << "\n-------------------------------------\n => ";
	cin >> operation;
	return operation;
}

int AddNumbers(int a, int b)
{
	int sum = 0;
	sum = a + b;
	return sum;
}

int SubtractNumbers(int a, int b)
{
	int difference = 0;
	difference = a - b;
	return difference;
}

string PrintSResultOfOperation(int result, int a, int b ,string operationName)
{
	return "\nThe Result of " + to_string(a) + " " + operationName + " " + to_string(b) + " is : " + to_string(result) + "\n";
}
void PrintResult( int a,int b, enOperation operation)
{
	switch (operation)
	{
	case enOperation::Add:
		cout << PrintSResultOfOperation(AddNumbers(a,b),a,b,"+");
		break;
	case enOperation::Subtract:
		cout << PrintSResultOfOperation(SubtractNumbers(a, b), a, b, "-");
		break;
	default:
		cout << "Invalid operation!" << endl;
	}
}

int main()
{
	int* Number1, * Number2;
	enOperation *Operation;
	Number1 = new int;
	Number2 = new int;
	Operation = new enOperation;

	*Number1 = ReadNumber("Enter first number1 => ");
	*Number2 = ReadNumber("Enter second number2 => ");
	*Operation = (enOperation)ReadOperation();

	PrintResult(*Number1, *Number2, *Operation);

	delete Number1;
	delete Number2;
	delete Operation;

	system("pause>0");	
	return 0;
}

