#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>
#include <deque>

int main() {
	std::deque<std::string> coll;
	coll.assign (3,std::string("string"));
	coll.push_back("last string");
	coll.push_front("first string");
	std::copy(coll.cbegin(),coll.cend(),
			std::ostream_iterator<std::string>(std::cout,"\n"));
	std::cout << std::endl;

	coll.pop_front();
	coll.pop_back();
	for (unsigned i = 1; i < coll.size(); ++i) {
		coll[i] = "another " + coll[i];
	}

	coll.resize(4,"resized string");
	std::copy(coll.cbegin(),coll.cend(),
			std::ostream_iterator<std::string>(std::cout,"\n"));
	return 0;
}
