#include <string>
#include <vector>
#include "book.cpp"

class section{
private:
	int sec_num;
	std::vector<book> req_books;
	std::vector<book> opt_books;
public:
	// Constructors
	section(int n);

	// Access Functions
	int get_sec_num(){return sec_num;}

	// Set Functions
	void set_sec_num(int n){sec_num = n;} 
	void add_req_book(book b){req_books.push_back(b);}
	void add_opt_book(book b){opt_books.push_back(b);}
};

section::section(int n){sec_num = n;}
