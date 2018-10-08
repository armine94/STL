#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <deque>
#include <set>

using namespace std;
int main() {
	list<int> list = {1,2,5,4,7,8,6,9,8};
	vector<int> vec ;
	copy(list.cbegin(),list.cend(),back_inserter(vec));
	deque<int> deq;
	copy(list.cbegin(),list.cend(),front_inserter(deq));
	set<int> st;
	copy(list.cbegin(),list.cend(),inserter(st,st.begin()));
	for(auto el : st){
		cout<<"elem = " << el << endl;
	}
	return 0;
}
