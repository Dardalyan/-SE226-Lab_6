#include <iostream>
#include <cmath>

// TASK 3
double sum = 0;

double func(int n) {
	int k = 1;
	for (int i = 1; i < n + 1; i++) {
		sum += (pow(-1, i + 1) / i);
	}
	return sum;
}

//TASK 4
double func2() {
	std::cout << "Please enter the value 'n' " << std::endl;
	int n;
	std::cin >> n;
	int k = 1;
	for (int i = 1; i < n + 1; i++) {
		sum += (pow(-1, i + 1) / i);
	}
	return sum;
}

int main()
{
	//for task 3
	std::cout << "Please enter the value 'n' " << std::endl;
	int n;
	std::cin >> n;
	std::cout << func(n) << std::endl;

	//for task 4
	std::cout<< func2()<<std::endl;


	return 0;
}

