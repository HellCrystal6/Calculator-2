#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

void terminalCalculator() {

	string s1 = "+";
	string s2 = "-";
	string s3 = "*";
	string s4 = "/";

	cout << "Type 'exit' to quit when the signs come" << endl;
	cout << "Choose A Number: " << endl;

	int num;
	cin >> num;

	cout << "First Number: " << num << endl;
	cout << "Choose the second Number: " << endl;

	int num2;
	cin >> num2;

	cout << "First Number: " << num << endl;
	cout << "Second Number: " << num2 << endl;
	cout << "What would you like to do with those numbers?(add, sub, mul, div): " << endl;

	string sign;
	cin >> sign;


	if (sign == "exit") {
		cout << "Exiting...";
		exit(EXIT_FAILURE);
	}

	if (sign == "add") {
		cout << "The Answer Is: " << num + num2 << endl;
	}
	if (sign == "sub") {
		cout << "The Answer Is: " << num - num2 << endl;
	}
	if (sign == "mul") {
		cout << "The Answer Is: " << num * num2 << endl;
	}
	if (sign == "div") {
		cout << "The Answer Is: " << num / num2 << endl;
	}


	while (true) {
		terminalCalculator();
	}

}

int main() {

	terminalCalculator();

	return 0;

}