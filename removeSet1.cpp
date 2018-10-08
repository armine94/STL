#include <algorithm>
#include <iostream>
#include <list>

int main() {
	std::list<int> coll;

	for(int i = 1; i <= 8; ++i) {
		coll.push_front(i);
		coll.push_back(i);
	}
	std::list<int>::const_iterator it = coll.cbegin();
	for(it; it != coll.cend(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	
	coll.erase(remove(coll.begin(),coll.end(),3),coll.end());

	coll.remove(4);

	for(auto i : coll) {
		std::cout << i << " " ;
	}
	std::cout << std::endl;
	return 0;
}

