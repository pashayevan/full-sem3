#include <iostream>
#include <list> 

int main() {
	std::list<int>l{0,10,15,20};
	auto iter=l.begin();
	std::advance(iter,2);
}
