#include <iostream>
#include <forward_list>
#include <iterator>

int main() {
	std::forward_list<int> flist = {1,2,3,97,98,99};
	auto posBefore = flist.before_begin();
	for (++posBefore; next(posBefore)!=flist.end(); ++posBefore) {
		if( *posBefore %2 == 0) {
			break;
		}
	}

	for(auto pos=flist.begin(); pos!=flist.end(); ++pos,++posBefore) {
		if (*pos %2 == 0) {
			break;
		}
	}

	flist.insert_after(posBefore,44);
	for(auto el : flist) {
		std::cout << el << " ";
	}
	std::cout << std::endl;
	
	return 0;
}
