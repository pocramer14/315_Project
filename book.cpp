#include <string>

class book{
private:
	std::string title;
	std::string author;
	std::string pub_date; 	// Date of Publication stored in MM/YYYY format
	std::string format; 	// New (N), Used (U), Rented (R), Electronic (E)
	std::string isbn;
	int edition;
	std::string cost;
	bool required;
public:
	// Constructors
	book(std::string i, std::string t);

	// Access Functions
	std::string get_title(){ return title;}
	std::string get_author(){ return author;}
	std::string get_pub_date(){ return pub_date;}
	std::string get_format(){ return format;}
	std::string get_isbn(){ return isbn;}
	int get_edition(){ return edition;}
	std::string get_cost(){ return cost;}
	bool is_required(){ return required;}

	// Set Functions
	void set_title(std::string t){ title = t;}
	void set_author(std::string a){ author = a;}
	void set_pub_date(std::string p){ pub_date = p;}
	void set_format(std::string f){ format = f;}
	void set_isbn(int i){ isbn = i;}
	void set_edition(int e){ edition = e;}
	void set_cost(std::string c){ cost = c;} 
	void set_required(bool r){ required = r;}
};

book::book(std::string i,std::string t){
	isbn = i;
	title= t;
}
