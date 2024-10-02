#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	std::vector<int> data{100,42,12,80,0};
	std::sort(data.begin()+1,data.end()-1);
	for(const auto& el:data)
	{
		std::cout<<el<<' ';
	}
	return 0;
}
