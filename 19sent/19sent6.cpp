#include <iostream>
#include <vector>
#include <string>

int main() {
	const size_t m=1000000;
	const size_t n=10000;
	
	std::vector<std::string> v(m);
	
	for(size_t i=0; i!=m; ++i) {
		v[i].resize(n,'@');
	}
	size_t sum=0;
	for (const auto& row:v) {
		sum+=row.size();
	}
	std::cout<<sum<<"\n";
	
}
