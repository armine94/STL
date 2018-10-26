#include <algorithm>
#include <iostream>
#include <iterator>
#include <set>

int main() {
	std::multiset<int,std::greater<int>> coll1;
	coll1.insert({4, 3, 5, 1, 6, 2});
	coll1.insert({6, 4, 5});

	for(auto el : coll1) {
		std::cout << el << " ";
	}
	std::cout << std::endl;

	auto iPos = coll1.insert(4);
		std::cout << "4 inserted as element " 
			<<distance(coll1.begin(),iPos) + 1 << std::endl;
	
	std::multiset<int> coll2(coll1.cbegin(),coll1.cend());
	std::copy(coll2.cbegin(),coll2.cend(),
		std::ostream_iterator<int>(std::cout," "));
	std::cout << std::endl;

	coll2.erase(coll2.begin(), coll2.find(3));

	int num;
	num = coll2.erase(5);
	std::cout << num << " element(s) removed" << std::endl;

	std::copy (coll2.cbegin(),coll2.cend(),
			std::ostream_iterator<int>(std::cout," "));
	std::cout << std::endl;

	return 0;
}
