#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	std::vector<int> coll = {2,5,4,1,6,3,45};
	std::vector<int> ::const_iterator min = min_element(coll.cbegin(),coll.cend());
	std::vector<int>::const_iterator max = max_element(coll.cbegin(),coll.cend());
	std::cout<<*min << " " <<*max << " \n"  ;
	sort(coll.begin(),coll.end());
	for(auto elem : coll ){
		std::cout<<"  elem = " << elem ;
		std::cout<<"\n";
	}
	auto pos3 = find (coll.begin(),coll.end(),3);
	auto pos6 = find(coll.begin(),coll.end(),6);
	reverse(pos3,coll.end());
	for (auto elem : coll ) {
		std::cout << " nor elem " << elem <<"\n";
	}
	auto pos5 = find(pos3,pos6,5);
	if(pos5 == pos6){
		std::cout << "1111\n";
	}
	else {
		std::cout<<"2222\n";
	}
	std::cout<<"\n";
	return 0;
}
