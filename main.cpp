#include <iostream>
#include <string>
#include "book.cpp"

using namespace std;

int main(){
	string usr_input = "";
	string command = "";
	string args = "";
	while(usr_input.compare("quit")!=0){
		getline(std::cin, usr_input);
		int index = usr_input.find(" ", 0); //find first instance of whitepace in user input
		command = usr_input.substr(0, index); //get first token of usr_input
		args = usr_input.substr(index+1, usr_input.length()-index); //rest of tokens stored in args
		if(command.compare("B")!=0){
		} 
		else if(command.compare("D")==0){
		}
		else if(command.compare("M")==0){
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

