#include <algorithm>
#include <iostream>
#include <vector>
#include <list>

int main() {
	std::vector<int> v{3,14,15,92,6};
	std::list<int>l(10);
	auto iter=std::copy(v.begin(),v.end(),l.begin());
	for(const auto& el:l)
	{
		std::cout<<el<<" ";
	}
	std::cout<<"\n";
	
	l.erase(iter,l.end());
	for(const auto& el:l)
	{
		std::cout<<el<<" ";
	}
	return 0;
}
