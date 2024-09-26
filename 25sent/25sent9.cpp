#include <iostream>
#include <vector>

int main() {
	std::vector<int> v{1,2,3,4};
	auto iter = v.begin();
	int* ptr=&v.front();
	int& ref = v.front();
	std::cout<<*iter<<" "<<*ptr<<" "<<ref<<"\n";
	v.push_back(5);
	std::cout<<*iter<<" "<<*ptr<<" "<<ref<<"\n";
}
