#include <string>
#include "section.cpp"
#include <vector>

class course{
private:
	std::string department;
	int course_num;
	std::string name;
	std::vector<book> books;
	std::vector<section> sections;
public:
	// Constructors
	course(std::string d, int cn, std::string n){
		department = d;
		course_num = cn;
		name = n;
	}

	// Access Functions
	std::string get_department(){ return department;}
	int get_course_num(){ return course_num;}
	std::string get_name(){ return name;}

	// Set Functions
	void set_department(std::string d){ department = d;}
	void set_course_num(int c){ course_num = c;}
	void set_name(std::string n){ name = n;}

	void add_section(int s){
		section sec(s);
		sections.push_back(sec);
	}
};

