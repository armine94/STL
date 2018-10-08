#include <iostream>
#include <algorithm>
#include <list>
#include <iterator>
//using namespace std;
int main(){
	std::list<int> list;
	for(int i = 0; i < 6; ++i) {
		list.push_front(i);
		list.push_back(i);
	}
	std::cout << "===================================\n";
	std::copy(list.cbegin(),list.cend(),
			std::ostream_iterator<int>(std::cout,"  "));
	std::cout << std::endl;
	std::list<int>::iterator end = std::remove(list.begin(),list.end(),3);
	std::cout << "=======================================\n";
	std::copy(list.cbegin(),list.cend(),
			std::ostream_iterator<int>(std::cout, "  "));
	std::cout << std::endl;
	std::cout << "number of removed elements " << distance(end,list.end()) << std::endl;
	list.erase(end,list.end());
	std::copy(list.cbegin(),list.cend(),
			std::ostream_iterator<int>(std::cout, "  ")); 
	std::cout << std::endl;
	/*kam karanq remove exac@ jnjenq mi hramani mej 
	
	list.erase(remove(list.begin(),list.end(),3),list.end());
	std::copy(list.cbegin(),list.cend(),
			std::ostream_iterator<int>(std::cout, " "));
	*/
	return 0;
}
