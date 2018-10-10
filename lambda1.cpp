#include <functional>
#include <iostream>

std::function<int(int,int)> returnLambda () {
	return [] (int x,int y) {
		return x*y;
	};
}

int main() {
	auto lf = returnLambda();
	std::cout << lf(15,10) << std::endl;
}
