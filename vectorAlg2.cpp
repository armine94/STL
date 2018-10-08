#include <iostream>
#include <algorithm>
#include <vector>

int main(){
	std::vector<int> vec = {21,23,25,27,29,30,32,33,34,35,36,38,3,39};
	auto pos = find_if(vec.begin(),vec.end(),[] (int i) {
			return i == 25 || i == 35;
			});
	std::vector<int>::iterator pos25,pos35;
	
	if(pos == vec.end()) {
		std::cout << "element@  chka \n";
	}
	else if (*pos == 25) {
		pos25 = pos;
		pos35 = find(++pos,vec.end(),35);
		std::cout << " 25@ gtnvel e\n";
	}
	else {
		pos35 = pos;
		pos25 = find(pos35,vec.end(),25);
		std::cout<<"35@ gtnvel e\n";
	}
return 0 ;
}
