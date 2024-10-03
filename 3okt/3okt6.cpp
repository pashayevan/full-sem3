#include <iostream>
#include <string>
#include <string_view>
#include <vector>

int main() {
	std::vector<std::string_view>lines;
	for(int i=0;i!=5; ++i){
		std::string line;
		std::getline(std::cin, line);
		lines.push_back(line);
	}
	for(auto item: lines) {
		std::cout<<item<<"\n";
	}
}
