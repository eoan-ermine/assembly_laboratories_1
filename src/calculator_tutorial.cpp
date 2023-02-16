#include <iostream>
#include "calculator.hpp"

using namespace std;

int main() {
	double x{}, y{};
	char operation = '+';

	cout << "Calculator console application\n";
	cout << "Please, enter the operation to perform. Format: a+b | a-b | a*b | a/b\n\n";

	Calculator calculator;
	while (true) {
		cin >> x >> operation >> y;
		if (operation == '/' && y == 0) {
			cout << "Division by 0 exception\n";
			continue;
		}
		cout << "Result is: " << calculator.Calculate(x, operation, y) << '\n';
	}
}