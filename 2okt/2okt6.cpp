#include <algorithm>
#include <iostream>
#include <string>

int main() {
	std::string s="No lemon, no melon";
	std::reverse(s.begin(),s.end());
	std::cout<<s<<"\n";
}
