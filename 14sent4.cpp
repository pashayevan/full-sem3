#include <iostream>
#include <vector>
#include <string>
int main() {
	std::vector<int>data{1,2,3,4,5};
	std::cout<<data.capacity()<<"\n";
	data.push_back(6);
	std::cout<<data.capacity()<<"\n";
	std::cout<<data.size()<<"\n";
	
	return 0;
}
