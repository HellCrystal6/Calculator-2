#include <iostream>
#include <limits>
#include <cmath>
#include <string>

using namespace std;

void calculator() {
  string oper;
  double num1, num2;

  cout << "Choose your first number: ";
  cin >> num1;

  cout << "Choose your operator (*, /, -, +, ^, sqrt): ";
  cin >> oper;

  if (oper != "sqrt") {
    cout << "Choose your second number: ";
    cin >> num2;
  }

  if (cin.fail()) {
    cout << "Invalid input. Please try again." << endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return;
  }

  if (oper == "+") {
    cout << "The answer is: " << num1 + num2 << endl;
  } else if (oper == "-") {
    cout << "The answer is: " << num1 - num2 << endl;
  } else if (oper == "*") {
    cout << "The answer is: " << num1 * num2 << endl;
  } else if (oper == "/") {
    if (num2 != 0)
      cout << "The answer is: " << num1 / num2 << endl;
    else
      cout << "Division by zero is not allowed." << endl;
  } else if (oper == "^") {
    cout << "The answer is: " << pow(num1, num2) << endl;
  } else if (oper == "sqrt") {
    cout << "The square root of " << num1 << " is: " << sqrt(num1) << endl;
  } else {
    cout << "That is not a valid operator!" << endl;
  }
}

int main() {
  while (true) {
    calculator();

    char choice;
    cout << "Do you want to calculate again? (y/n): ";
    cin >> choice;

    if (choice != 'y' && choice != 'Y')
      break;
  }

  return 0;
}
