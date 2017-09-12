#include <string>

class book{
private:
	std::string title;
	std::string author;
	std::string pub_date; 	// Date of Publication stored in MM/YYYY format
	char format; 		// New (N), Used (U), Rented (R), Electronic (E)
	int isbn;
	int edition;
public:
	// Constructors
	book(int i, std::string t);

	// Access Functions
	std::string get_title(){ return title;}
	std::string get_author(){ return author;}
	std::string get_pub_date(){ return pub_date;}
	char get_format(){ return format;}
	int get_isbn(){ return isbn;}
	int get_edition(){ return edition;}
	
	// Set Functions
	void set_title(std::string t){ title = t;}
	void set_author(std::string a){ author = a;}
	void set_pub_date(std::string p){ pub_date = p;}
	void set_format(char f){ format = f;}
	void set_isbn(int i){ isbn = i;}
	void set_edition(int e){ edition = e;} 
};

book::book(int i,std::string t){
	isbn = i;
	title= t;
}
