#include <iostream>
#include <functional>
#include <numeric>
#include <algorithm>
int main(){
	std::array<int,10> arr = {11,22,33,44,55};
	for (auto elem : arr) {
		std::cout << elem << " ";
	}
	std::cout << std::endl;
	arr.back() = 8888;
	arr[arr.size() - 2] = 999;
	for(auto elem : arr) {
		std::cout << elem << " ";
	}
	std::cout << std::endl;
	std::cout << "sum : "
		<<std::accumulate(arr.begin(),arr.end(),0)
		<<std::endl;
	std::transform(arr.begin(),arr.end(),
			arr.begin(),
			std::negate<int>());
	for(auto elem : arr) {
		std::cout << elem << " ";
	}
	std::cout << std::endl;
	return 0;
}
