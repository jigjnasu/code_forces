#include <iostream>

int main() {
	unsigned long long int m = 0;
	unsigned long long int n = 0;
	unsigned long long int a = 0;
	std::cin >> m >> n >> a;

	unsigned long long int rows = m / a;
	if (m % a)
		++rows;

	unsigned long long int cols = n / a;
	if (n % a)
		++cols;

	std::cout << rows * cols << std::endl;
	return 0;
}
