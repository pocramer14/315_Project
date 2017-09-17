#include <string>

class course{
private:
	std::string department;
	int course_num;
	std::string name;
public:
	// Constructors
	course();

	// Access Functions
	std::string get_department(){ return department;}
	int get_course_num(){ return course_num;}
	std::string get_name(){ return name;}

	// Set Functions
	void set_department(std::string d){ department = d;}
	void set_course_num(int c){ course_num = c;}
	void set_name(std::string n){ name = n;}
};

course::course(){

}
