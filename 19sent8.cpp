#include <iostream>
#include <vector>
#include <string>

int main() {
	std::vector<std::string> words={"one","two","three"};
	std::string &ref=words[0];
	words.clear();
	
	std::cout<<ref<<"\n";
	//undefined
}
