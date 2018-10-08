#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>
int main(){
	std::list<int> l = {1,2,3,4,5,6,7,8,9};
	std::vector<int> v;

	v.resize(l.size(),*l.begin());//2rd parametr karoxe chnshvel,nsh. depqum ayd arjeqov e icializacvum v-in trvume l.size() chapov taracq 
	for(auto el : v)
		std::cout<<el<<std::endl;
	copy(l.cbegin(),l.cend(),v.begin());//v petq e lini >= chap l-ic

	std::deque<int> q(l.size());//stexcvume deque l.size() chapov ev inicializacvum ir konstruktri(koxmic) defoul arjeqov
	
	copy(l.cbegin(),l.cend(),q.begin());
	
	for(auto elem : q){
		std::cout << elem << std::endl;
	}
	return 0;
}

