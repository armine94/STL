#include <iostream>
#include <algorithm>
#include <iterator>
#include <set>

int main() {
	std::set<int> coll = {1,2,3,4,5,6,7,8};

	copy(coll.cbegin(),coll.cend(),
			std::ostream_iterator<int>(std::cout,"  "));
	std::cout << std::endl;

	int num = coll.erase(4);

	std::cout << "number of deleted elements " << num << std::endl;

	std::copy(coll.cbegin(),coll.cend(),
			std::ostream_iterator<int>(std::cout,"  "));
	std::cout << std::endl;

	return 0;
}
