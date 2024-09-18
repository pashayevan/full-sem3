#include <iostream>

int main() {
	
	std::string s="some string functions";
	
	s.insert(5, "std::");
	std::cout<<s<<"\n";
	
	s.replace(0,4,"special");
	std::cout<<s<<"\n";
	
	s.erase(8,5);
	std::cout<<s<<"\n";
	
	return 0;
}
