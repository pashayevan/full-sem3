#include <iostream>
#include <list> 

int main() {
	std::list<int>l{10,15,20};
	auto iter=l.begin();
	std::cout<<*iter<<"\n";
	++iter;
	std::cout<<*iter<<"\n";
	++iter;
	std::cout<<*iter<<"\n";
}
