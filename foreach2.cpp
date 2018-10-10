#include <iostream>
#include <algorithm>
#include <vector>

class PrintInt {
	public:
		void operator() (int elem) const {
			std::cout << elem << ' ';
		}
};

int main() {
	std::vector<int> vec;
	for(int i=1; i<=9; ++i) {
		vec.push_back(i);
	}
	for_each (vec.cbegin(),vec.cend(),
			PrintInt());
	std::cout << std::endl;
	return 0;
}
