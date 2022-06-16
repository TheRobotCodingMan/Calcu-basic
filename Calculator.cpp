#include <iostream>

int main() {
	
	char op;
	double num;
	double num1;
	double result;
	
	std::cout << "Hello to calculator! You can only use the operators below.\n";
	std::cout << "Enter only the given operators - +, -, *, /.\n";
	std::cin >> op;
	
	std::cout << "\nNow then, please enter the first number.\n";
	std::cin >> num;
	std::cout << "Enter second number.\n";
	std::cin >> num1;
	std::cout << "\n";
	

	switch(op)
	{
		case '+':
			result = num + num1;
			std::cout << num << " + " << num1 << " = " << result;
			break;
		case '-':
			result = num - num1;
			std::cout << num << " - " << num1 << " = " << result;
			break;
		case '*':
			result = num * num1;
			std::cout << num << " * " << num1 << " = " << result;
			break;
		case '/':
			result = num / num1;
			std::cout << num << " / " << num1 << " = " << result;
			break;
		defult:
			std::cout << "Error. Please enter different number and/or operator.";
			break;
	}
	
}
