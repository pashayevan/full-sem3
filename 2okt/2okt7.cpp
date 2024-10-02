#include <algorithm>
#include <iostream>
#include <vector>

int main() {
	std::vector<int> v{5,5,3,2,2,5,9,1};
	auto iter=std::unique(v.begin(),v.end());
	for(const auto& el: v)
	{
	std::cout<<el<<" ";
	}
	std::cout<<"\n";
	v.erase(iter,v.end());
	for(const auto& el:v)
	{
		std::cout<<el<<" ";
	}
	std::cout<<"\n";
	std::cout<<iter-v.begin()<<"\n";
	return 0;
}
