#include <forward_list>
#include <iostream>

int main() {
	std::forward_list<int> l1 = {1, 2, 4, -55,5};
	std::forward_list<int> l2 = {3, 97, 98, 9 };

	auto pos1 = l1.before_begin();
	for (auto pb1 = l1.begin(); pb1 != l1.end(); ++pb1,++pos1) {
		if (*pb1 == 3) {
			break;
		}
	}
	auto pos2 = l2.before_begin();
	for (auto pb2=l2.begin(); pb2 != l2.end(); ++pb2, ++pos2) {
		if (*pb2 == 99) {
			break;
		}
	}
	l1.merge(l2);//l1 mej texapoxume l2 elementner@ dasavorelov , ete 2 kanteynernel dasavorvac en

//	l1.splice_after(pos2,l2,
		//	pos1);
	for(auto el : l1) {
		std::cout << el << " ";
	}
	std::cout << std::endl;

	for(auto el : l2) {
		std::cout << el << " ";
	}
	std::cout << std::endl;
	return 0;
}
