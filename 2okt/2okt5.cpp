#include <algorithm>
#include <iostream>
#include <string>

int main() {
	std::string s="iPhone SE";
	std::cout<<std::count_if(
	s.begin(),
	s.end(),
	[](char c) {
		return 'A'<=c&& c<='Z';
	}
	) <<"\n";
}
