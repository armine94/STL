#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <stdio.h>
#include <cstring>
#include <string>
int main() {
	std::vector<char> vec;
	vec.resize(50);
	strcpy(&vec[0],"hello , world");
	printf("%s\n",&vec[0]);
	std::vector<int> v(4,10), v1(6,9);
	v = v1;	//v havasarecnum e v1-in
	v.assign(2,3);	//2 hat 3 arjeqi copy e texadrum v i mej 
	std::vector<int>::iterator pos = v.begin();
	v.insert(pos + 1,4,5);	//2rd dirqic araj 4 hat 5 e avelacnum v-i mej
	v.erase(remove(v.begin(),v.end(),3),v.end());
	
	for(auto el : v){
		std::cout << el << " ";
	}
	std::cout << std::endl << v.max_size() << " " << v.capacity();
	return 0;
}
