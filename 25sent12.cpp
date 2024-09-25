#include <iostream>
#include <map>
#include <string> 

int main() {
	std::map<std::string,int >fregs;
	std::string word;
	while(std::cin>>word) {
		++fregs[word];
	}
	for(const auto&[word,freg]: fregs) {
		std::cout<<word<<" "<<freg<<"\n";
	}
}
