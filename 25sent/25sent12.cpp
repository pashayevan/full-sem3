#include <iostream>
#include <unordered_map>
#include <string> 

int main() {
	std::unordered_map<std::string,int >fregs;
	fregs.reserve(300000);	
	std::string word;
	while(std::cin>>word) {
		++fregs[word];
	}
	for(const auto&[word,freg]: fregs) {
		std::cout<<word<<" "<<freg<<"\n";
	}
}
