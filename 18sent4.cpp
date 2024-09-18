#include<iostream>
#include<utility>
#include<string>

int main() {
	std::pair<std::string, int>p={"Hello", 42};
	auto[word,freg]=p;
	
	std::cout<<word<<"\n";
	std::cout<<freg<<"\n";
	return 0;
}
