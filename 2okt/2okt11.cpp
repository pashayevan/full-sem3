#include <algorithm>
#include <iostream>
#include <list>

int main() {
	std::list<int> data{3,14,15,92,6};
	//std::sort(data.begin(),data.end());
	data.sort();
	for(const auto& el: data)
	{
		std::cout<<el<<" ";
	}
	std::cout<<"\n";
	return 0;
}
