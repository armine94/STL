#include <algorithm>
#include <iostream>
#include <vector>

void print (int elem) {
	std::cout << elem << ' ';
}

int main() {
	std::vector<int> vec;

	for(int i = 1; i <=  9; ++i) {
		vec.push_back(i);
	}

	for_each (vec.cbegin(),vec.cend(),
			print);
	std::cout << std::endl;
	return 0;
}
