#include <iostream>
#include <string>

int main() {
	std::string s1="elementary";
	std::string& s2=s1;
	s1.clear();
	std::cout<<s2.size()<<"\n";
}
	
