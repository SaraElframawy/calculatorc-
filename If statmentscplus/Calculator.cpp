#include<iostream>
int main() {

	char op;
	double num1;
	double num2;
	double result;
	std::cout << "*******Calculator********\n";
	std::cout << "Enter whether operation you wan to use(+-/*)";
	std::cin >> op;
	std::cout << "Enter the first number";
	std::cin >> num1;
	std::cout << "Enter the second number";

	std::cin >> num2;
	switch (op)
	{
	case'+':
		result = num1 + num2;
		std::cout << result<< '\n';
		break;
	case'-':
		result = num1 - num2;
		std::cout << result;
		break;
	case'*':
		result = num1 * num2;
		std::cout << result;
		break;
	case'/':
		result = num1 / num2;
		std::cout << result;
		if (num2 == 0) {
			std::cout << "You can't divide number by 0"<< "\n";
		}
		break;
	default:std::cout << "That is not any allowed sign";
		break;
	}



	std::cout << "*************************\n";

	return 0;

}