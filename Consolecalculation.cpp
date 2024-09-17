#include <iostream>

int main() {
	int num1, num2, res;
	char opp;

	std::cout << "Pls input your first number: ";
	std::cin >> num1;

	std::cout << "Pls input the opperant: ";
	std::cin >> opp;

	std::cout << "Pls input your secound number: ";
	std::cin >> num2;

    switch (opp) {
    case '+':
        res = num1 + num2;
        break;
    case '-':
        res = num1 - num2;
        break;
    case '*':
        res = num1 * num2;
        break;
    case '/':
        if (num2 != 0) {
            res = num1 / num2;
        }
        else {
            std::cout << "Error: Division by zero is not allowed." << std::endl;
            return 1;  
        }
        break;
    default:
        std::cout << "Error: Invalid operator." << std::endl;
        return 1; 
    }

   
    std::cout << "The result is " << res << std::endl;
    
    return 0;
}