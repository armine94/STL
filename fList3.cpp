#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>
#include <forward_list>

void printList (const std::string& s, const std::forward_list<int>& l1,
		const std::forward_list<int>& l2) {
	std::cout << s << std::endl;
	std::cout << " list1: ";
	std::copy(l1.cbegin(),l1.cend(),
			std::ostream_iterator<int>(std::cout," "));
	std::cout << std::endl << "list2: ";
	std::copy(l2.cbegin(),l2.cend(),
			std::ostream_iterator<int>(std::cout," "));
	std::cout << std::endl;
}

int main() {
	std::forward_list<int> list1 = {1, 2, 3, 4, 5};
	std::forward_list<int> list2 = {77, 88, 99};
	printList("initial: ", list1,list2);

	list2.insert_after(list2.before_begin(), 99);
	list2.push_front(10);
	list2.insert_after(list2.before_begin(), {10, 11, 12, 13} );
	printList("6 new elements : ",list1, list2);
	list1.insert_after(list1.before_begin(),list2.begin(),list2.end());
	printList("list2 into list1 : ",list1,list2);

	list2.erase_after(list2.begin());
	list2.erase_after(find(list2.begin(),list2.end(),99),list2.end());
	printList("delete 2nd and after 99 : " ,list1, list2);

	list1.sort();
	list2 = list1;
	list2.unique();
	printList("sorted and unique : ", list1, list2);
	list1.merge(list2);
	printList("mergesd: ", list1,list2);
	return 0;
}

	
