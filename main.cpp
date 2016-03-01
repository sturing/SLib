#include <iostream>
#include "slib.h"

int main() {
	Stack<double>stack;
	stack.push(2.3);
	std::cout << stack.pop() << std::endl;
}
