#include <iostream>


void doSomeWork() {
	std::cout << "do some work";
}

int main()
{
	std::cout << "enter any value : ";
	int x{ 0 };
	std::cin >> x;
	std::cout << "\n double value is " << x * 2;
	doSomeWork();
	return 0;
}




