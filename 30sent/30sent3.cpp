#include <iostream>
#include <iterator>
#include <map>
#include <string>

int main() {
	std::map<int, std::string> numbers {
		{100, "hundred"},
		{3, "three"},
		{42, "forty two"}
	};
	auto iter = numbers.find(11);
	if(iter !=numbers.end())
	{
		const auto& [key, value] = *iter;
		std::cout<<"found:"<<key<<"-"<<value<<"\n";
	
	if(iter !=numbers.begin()) {
		const auto& [key, value] =*std::prev(iter);
		std::cout<<"previous:"<<key<<"-"<<value<<"\n";
	}else{
		std::cout<<" no previous element\n";
	}
	if (auto nextIter=std::next(iter); nextIter!=numbers.end())
	{
		const auto& [key, value] =*nextIter;
		std::cout<<"next:"<<key<<"-"<<value<<"\n";
	}else{
		std::cout<<"no next element\n";
	}
	}else {
		std::cout<<"not found\n";
	}

	return 0;
}
