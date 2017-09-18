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
	
	void add_book_to_course(book b){
		books.push_back(b);
	}

	void add_book_to_section(book b, int s_num, std::string required){
		bool req;
		if(required.compare("R")==0)
			req = 1;
		else
			req = 0;
		//search to see if section already exists
		for(std::vector<section>::iterator it = sections.begin(); it!=sections.end(); ++it){
			if(it->get_sec_num()==s_num){
				if(req)
					it->add_req_book(b);
				else
					it->add_opt_book(b);
				return;
			}
		}
		//if section does not exist, add it and the corresponding book
		add_section(s_num);
		if(req)
			sections.back().add_req_book(b);
		else
			sections.back().add_opt_book(b);
		
	}
};

