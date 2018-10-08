#include <algorithm>
#include <iostream>
#include <vector>
#include <iterator>
#include <string>

using namespace std;

int main() {
	vector<int> vec;
	/*copy(istream_iterator<string>(cin),
			{},
			back_inserter(vec));
	sort(vec.begin(),vec.end());

	unique_copy(vec.begin(),vec.end(),
			ostream_iterator<string>(cout,"\n"));
	*/

	for(int i = 5; i < 24; i += 3) {
		vec.push_back(i);
	}
	copy(vec.crbegin(),vec.crend(),ostream_iterator<int>(cout,"\t"));
	cout<< "\n"<< * vec.crend();
	return 0;
}
