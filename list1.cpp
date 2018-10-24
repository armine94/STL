#include <iostream>
#include <algorithm>
#include <iterator>
#include <list>

void printList(const std::list<int>& l1, const std::list<int> l2) {
	std::cout << "list1 : ";
	std::copy(l1.cbegin(),l1.cend(),
			std::ostream_iterator<int>(std::cout," "));
	std::cout << std::endl;
	std::cout << "list2 : ";
	std::copy (l2.cbegin(), l2.cend(),
			std::ostream_iterator<int>(std::cout," "));
	std::cout << std::endl;
}

int main() {
	std::list<int> list1,list2;
	for(int i = 0; i < 6; ++i) {
		list1.push_back(i);
		list2.push_front(i);
	}
	printList(list1,list2);
	list2.splice(find(list2.begin(),list2.end(),
				3),
			list1);
	printList(list1,list2);
	list2.splice(list2.end(),
			list2,
			list2.begin());
	printList(list1,list2);
	list2.sort();
	list1 = list2;
	list2.unique();
	printList(list1,list2);
	list1.merge(list2);
	printList(list1,list2);
	
	return 0;
}

