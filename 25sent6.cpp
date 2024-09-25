#include <iostream>
#include <list> 

int main() {
	std::list<int>l{0,10,15,20};
	auto iter=l.begin();
	++iter;
	l.insert(iter,5);
	for (auto iter=l.begin();iter!=l.end();++iter)
	{
		if (*iter %2==0)
		iter=l.erase(iter);
	//	else
	//	++iter;
	}
	for (auto iter=l.begin();iter!=l.end();++iter) {
	std::cout<<*iter<<"\n";
}
}
