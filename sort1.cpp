#include <algorithm>
#include <iostream>
#include <deque>
#include <string>

class Person {
	public:
		std::string firstname() {
			return getName();
		}
		std::string lastname() {
			return getLastname();
		}
		void setName(std::string const na){
			name = na;
		}
		void setLastname(std::string const  lName){
			lastName = lName;
		}

		std::string getName() {
			return name;
		}
		std::string getLastname(){
			return lastName;
		}
	
		std::string name;
		std::string lastName;
};
bool personSotCriterion ( Person& p1, Person& p2) {
/*	bool a = false;
	if(p1.firstname() == "Armen");{
		a = true;
	}
	return a;
	*/
	return p1.lastname() < p2.lastname() || (p1.lastname() == p2.lastname() && p1.firstname() < p2.firstname()) ;
}

int main(){
	Person p,p1,p2,p3;
	p.setName("Jora");
	p.setLastname("Gevorgyan");
	p1.setName("Artemis");
	p1.setLastname("Zaqaryan");
	p2.setName("Gevorg");
	p2.setLastname("Gevorgyan");
	p3.setName("Hrant");
	p3.setLastname("Araqelyan");
	std::deque<Person> coll;
	coll.push_back(p);
	coll.push_back(p1);
	coll.push_back(p2);
	coll.push_back(p3);
	std::cout << "before Sorted \n" << std::endl;
	for(auto i : coll) {
		std::cout << i.firstname() << " " << i.lastname() << std::endl;
	}
	std::cout << "\nafther Sorted\n" << std::endl;
	sort(coll.begin(),coll.end(),
			personSotCriterion);
	for(auto i : coll) {
		std::cout << i.firstname() << "  " << i.lastname() << std::endl;
	}
	return 0;
}
