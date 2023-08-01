#include <iostream>

void tree_recursion(int n) {
	if (n > 0) {
		std::cout << n << std::endl;
		tree_recursion(n - 1);
		tree_recursion(n - 1);
	}
}