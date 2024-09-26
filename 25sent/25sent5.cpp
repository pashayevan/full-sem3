#include <iostream>
#include <list> 

int main() {
	std::list<int>l{10,15,20};
	for (auto iter=l.begin();iter!=l.end();++iter)
	std::cout<<*iter<<"\n";
	for (auto iter=l.rbegin();iter!=l.rend();++iter)
	std::cout<<*iter<<"\n";
}
