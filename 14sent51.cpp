#include <iostream>
#include <vector>
#include <string>

int main() {
	std::vector<std::string> words;
	size_t words_count;
	std::cin>>words_count;
	words.reserve(words_count);
	for( size_t i=0; i!=words_count; ++i){
		std::string word;
		std::cin>>word;
		words.push_back(word);
		}
		for(std::string el:words) {
			std::cout<<el<<" ";
		}
		return 0;  

}
