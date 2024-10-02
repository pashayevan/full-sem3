#include <algorithm>
#include <iostream>
#include <vector>
#include <list>

int main() {
	std::vector<int> v{3,14,15,92,6};
	std::list<int>l;
	l.resize(v.size());
	std::copy(v.rbegin(),v.rend(),l.begin());
	for(const auto& el:l)
	{
		std::cout<<el<<" ";
	}
	return 0;
}
