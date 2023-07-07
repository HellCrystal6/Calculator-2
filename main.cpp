#include <iostream>
#include <limits>
#include <cmath>

using namespace std;

void calculator() {
  char oper;
  double num1, num2;

  cout << "Choose your first number: ";
  cin >> num1;

  cout << "Choose your operator (*, /, -, +, ^): ";
  cin >> oper;

  cout << "Choose your second number: ";
  cin >> num2;

  if (cin.fail()) {
    cout << "Invalid input. Please try again." << endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return;
  }

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
    if (num2 != 0)
      cout << "The answer is: " << num1 / num2 << endl;
    else
      cout << "Division by zero is not allowed." << endl;
    break;
  case '^':
    cout << "The answer is: " << pow(num1, num2) << endl;
    break;
  default:
    cout << "That is not a valid operator!" << endl;
    break;
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
