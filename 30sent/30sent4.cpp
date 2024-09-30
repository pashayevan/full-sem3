#include <unordered_map>
#include <iostream>
#include <string>
int main() {
	std::unordered_multimap<std::string,int> data{
		{"a",1},
		{"b",2},
		{"c",3},
		{"d",4}
	};
	auto iter=data.find("a");
	if (iter!=data.end()){
		data.erase(iter);
	}
	data.erase("a");
}
