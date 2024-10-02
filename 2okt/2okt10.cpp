#include <algorithm>
#include <iostream>
#include <vector>
#include <list>

int main() {
	std::vector<int> v{3,14,15,92,6};
	std::list<int>l;
	std::copy(v.begin(), v.end(), std::back_inserter(l));
	for(const auto& el: l)
	{
		std::cout<<el<<" ";
	}
	return 0;
}
