#include <algorithm>
#include <iostream>
#include <cstdlib> // for abc()
#include <list>

bool isPrime (int number) {
	number = abs(number);//ignore negative numbers
	if (number == 0 || number == 1) {
		return false;
	}
	int divisor;
	for (divisor = number/2; number%divisor != 0; --divisor) {
		;
	}
	return divisor == 1;
}

int main() {
	std::list<int> coll;

	for (int i=24; i<=30; ++i) {
		coll.push_back(i);
	}
	std::list<int>::const_iterator pos = find_if(coll.cbegin(),coll.cend(),
			isPrime);

	if (pos != coll.cend()) {
		std::cout << *pos << " number is prime " << std::endl;
	}
	else {
		std::cout << "prime number dont find " << std::endl;
	}
	return 0;
}
