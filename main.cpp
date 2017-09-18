#include <iostream>
#include <string>
#include <vector>
//#include "book.cpp"
#include "course.cpp"

using namespace std;

vector<string> get_tokens(string arg){
	vector<string> tokens;
	if(arg.length()==0)
		return tokens;
	string temp = arg;
	while(temp.length()>0){
		int index = temp.find(" ", 0);
		tokens.push_back(temp.substr(0, index));
		temp = temp.substr(index+1,temp.length()-index); 	
	}
	return tokens;
}

int main(){
	string usr_input = "";
	string command = "";
	string args = "";
	vector<book> book_database;
	while(usr_input.compare("quit")!=0){
		getline(std::cin, usr_input);
		int index = usr_input.find(" ", 0); //find first instance of whitepace in user input
		command = usr_input.substr(0, index); //get first token of usr_input
		args = usr_input.substr(index+1, usr_input.length()-index); //rest of tokens stored in args
		vector<string> tokens = get_tokens(args);
		if(command.compare("B")!=0){
			//define a book
			book new_book(tokens[0], tokens[1]);
			book_database.push_back(new_book);	
		} 
		else if(command.compare("D")==0){
			//define a characteristic of a book (Author, Edition, or Date of Pub.)
			
			//check if book exists in database
			int search_index = -1;
			int count = 0;
			for(vector<book>::iterator it = book_database.begin(); it!=book_database.end();++it){
				if(it->get_isbn().compare(tokens[0])==0){
					if(tokens[1].compare("A")==0){
						it->set_author(tokens[2]);	
					}
					else if(tokens[1].compare("E")==0){
						it->set_edition(stoi(tokens[2]));
					}
					else if(tokens[1].compare("D")==0){
						it->set_pub_date(tokens[2]);
					}
				} 
			}
		}
		else if(command.compare("M")==0){
			//define cost of book

			for(vector<book>::iterator it = book_database.begin(); it!=book_database.end();++it){
				if(it->get_isbn().compare(tokens[0])==0){
					it->set_format(tokens[2]);
					it->set_cost(tokens[1]);	
				}
			}
		}
		else if(command.compare("C")==0){
		}
		else if(command.compare("A")==0){
		}
		else if(command.compare("GC")==0){
		}
		else if(command.compare("GS")==0){
		}
		else if(command.compare("GB")==0){
		}
		else if(command.compare("PB")==0){
		}
		else if(command.compare("PC")==0){
		}
		else if(command.compare("PY")==0){
		}
		else if(command.compare("PD")==0){
		}
		else if(command.compare("PM")==0){
		}
		else
			std::cout<<"Error: Invalid Command\n";
	}
}

