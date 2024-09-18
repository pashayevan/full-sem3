#include <iostream>
#include <utility>
#include <string>

int main() {
	std::string s1="Elementary, watson";
	std::string s2=s1;
	s1.clear();
	std::cout<<s1<<"\n"; // выводит пустую строку
	std::cout<<s2<<"\n"; // выводит строку s2 с текстом 
}
