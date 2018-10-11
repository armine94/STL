#include <functional>
#include <iostream>
#include <vector>

void foo (int a) {
	if (a > 10 && a < 20) {
		std::cout << a << std::endl;
	}
}

void bar(int a) {
	if(a % 2 == 0) {
		std::cout << a << std::endl;
	}
}

void doWork(std::vector<int>& vec,std::function<void(int)> f) {
	for(auto elem : vec) {
		f(elem);
	}
}

int main() {
	std::vector<int> vc = {44,57,13,16,17,54,88,47};
	std::cout << "function foo \n" ;
       	doWork(vc,foo);
	std::cout << "function bar \n" ;
       	doWork(vc,bar);
	return 0;
}

