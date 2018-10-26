#include <iostream>
#include <set>

template <typename T>
void print(const T& t, const std::string& str) {
	std::cout << str << std::endl;
	for (auto elem : t){
		std::cout << elem << " ";
	}
	std::cout << std::endl;
}

class RuntimeCmp {
	public:
		enum cmp_mode {normal,reverse};
	private:
		cmp_mode mode;
	public:
		RuntimeCmp (cmp_mode m=normal) : mode(m) {
		}
		template <typename T>
			bool operator() (const T& t1, const T& t2) const {
				return mode == normal ? t1 < t2 : t2 < t1;
			}

		bool operator== (const RuntimeCmp& rc) const {
			return mode == rc.mode;
		}
};

typedef std::set<int,RuntimeCmp> IntSet;
int main() {
	IntSet coll1 = {4, 7, 5, 1, 6, 2, 5};
	print(coll1,"coll1");

	RuntimeCmp reverse_order(RuntimeCmp::reverse);
	IntSet coll2(reverse_order);
	coll2 = {4, 7, 5, 1, 6, 2, 5};
	print(coll2, "coll2 : ");

	coll1 = coll2;
	coll1.insert(3);
	print(coll1, "coll1 : ");

	if(coll1.value_comp() == coll2.value_comp()) {
		std::cout << "coll1 and coll2 have the some sorting criterion " 
			<< std::endl;
	}
	else {
		std::cout << "coll1 and coll2 have a different sorting criterion"
			<< std::endl;
	}
	
	return 0;
}
