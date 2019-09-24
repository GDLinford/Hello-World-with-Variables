#include <iostream>

int main(int argc, char* argv[]) {
	int firstNumber = 26;
	int SecondNumber = 44;
	int ThirdNumber = 17;

	int numberofHellos = 0;

	std::cout << "The three numbers being added are:" << firstNumber + SecondNumber + ThirdNumber << std::endl;
	
	std::cout << "Hello number: " << numberofHellos++ << std::endl;
	std::cout << "Hello number: " << numberofHellos++ << std::endl; 
	std::cout << "Hello number: " << numberofHellos++ << std::endl;
	std::cout << "Hello number: " << numberofHellos++ << std::endl;
	std::cout << "Hello number: " << numberofHellos++ << std::endl;
	std::cout << "Hello number: " << numberofHellos++ << std::endl;
	std::cout << "Hello number: " << numberofHellos++ << std::endl;

	system("pause");

}
