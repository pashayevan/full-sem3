#include <iostream>
#include <vector>
#include <string>
int main() {
	std::vector<int> data ={1,2,3,4,5};
	for (int elem: data) {
		std::cout<<elem<<	" ";
	}
	std::cout<<"\n";
	//std::cout<<data.at(0)<<"\n";
	//std::cout<<data.at(42)<<"\n";
	//std::cout<<data.size()<<"\n";
	std::cout<<data.front()<<"\n";
	std::cout<<data.back()<<"\n";
	int*t=data.data();
	
	return 0;
}
