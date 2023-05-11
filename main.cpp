#include <iostream>
#include <string>
#include <stdlib.h>
#include <windows.h>

using namespace std;

void calculator() {

	char oper;
	double num1;
	double num2;

	cout << "Choose your first number: " << endl;
	cin >> num1;

	cout << "Choose your operator (*, /, -, +): " << endl;
	cin >> oper;

	cout << "Choose your second number: " << endl;
	cin >> num2;

	switch (oper) {

		case '+':
			cout << "The answer is: " << num1 + num2 << endl;
			break;

		case '-':
			cout << "The answer is: " << num1 - num2 << endl;
			break;

		case '*':
			cout << "The answer is: " << num1 * num2 << endl;
			break;

		case '/':
			cout << "The answer is: " << num1 / num2 << endl;
			break;

		default:
			cout << "That is not a valid operator!" << endl;
			system("cls");
			break;

	}

}

int main() {

	bool x = true;

	while (x) {

		calculator();

	}

	return 0;

}
