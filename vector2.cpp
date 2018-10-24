#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>

int main() {
	std::vector<std::string> sentence;// stexcum e datark vectr toxeri hamar
	sentence.reserve(5);//zbaxecnum e hish. taraxcq 5 elementi hamar
	sentence.push_back("Hello , ");
	sentence.insert(sentence.end(),{"how"," are ", "you", "?"});
	std::copy (sentence.cbegin(), sentence.cend(),
			std::ostream_iterator<std::string>(std::cout, " "));
	std::cout << std::endl;
	std::cout << "size()  = " << sentence.size() << std::endl;
	std::cout << "capacity() = " << sentence.capacity() << std::endl;
	swap(sentence[1],sentence[3]);
	sentence.insert(find(sentence.begin(),sentence.end(), "?"),
			"always");
	sentence.back() = "!";
	copy(sentence.cbegin(),sentence.cend(),
		std::ostream_iterator<std::string>(std::cout, " "));
	std::cout << std::endl;

	std::cout << "size() = " << sentence.size() << std::endl;
	std::cout << "capacity = " << sentence.capacity() << std::endl;
	sentence.pop_back();
	sentence.pop_back();
	sentence.shrink_to_fit();
	std::cout << " size() = " << sentence.size() << std::endl;
	std::cout << "capacity() = " << sentence.capacity() << std::endl;
	return 0;
}
