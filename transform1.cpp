#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
#include <set>
//#include "print.hpp"

int square(int value) {
	return value*value;
}

int main() {
	std::set<int> coll1;
	std::vector<int> coll2;

	for(int i = 1; i <= 9; ++i) {
		coll1.insert(i);
	}
	copy(coll1.cbegin(),coll1.cend(),
			std::ostream_iterator<int>(std::cout," elements :  "));

	std::cout << std::endl;
	std::transform (coll1.cbegin(),coll1.cend(),
			std::back_inserter(coll2),
			square);
	std::copy(coll2.cbegin(),coll2.cend(),
			std::ostream_iterator<int>(std::cout, " square : "));
	std::cout << std::endl;
	return 0;
}

