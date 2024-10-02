#include <algorithm>
#include <iostream>
#include <vector>
#include <list>

int main() {
	std::vector<int> data{3,14,15,92,6};
	//std::sort(data.begin(),data.end());
	std::partial_sort(data.begin(),data.begin()+3,data.end());
	for(const auto& el: data)
	{
		std::cout<<el<<" ";
	}
	std::cout<<"\n";
	return 0;
}

