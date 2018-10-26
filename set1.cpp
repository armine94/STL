#include <algorithm>
#include <iostream>
#include <iterator>
#include <set>

int main() {
	std::set<int,std::greater<int>> coll1;
	coll1.insert({4,3,5,1,6,2});
	coll1.insert(5);

	for(auto el : coll1) {
		std::cout << el << " ";
	}
	std::cout << std::endl;

	auto status = coll1.insert(4);
	if(status.second) {
		std::cout << "4 inserted as element " 
			<<distance(coll1.begin(),status.first) + 1 << std::endl;
	}
	else {
		std::cout << "4 already exists " << std::endl;
	}
	std::set<int> coll2(coll1.cbegin(),coll1.cend());
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
