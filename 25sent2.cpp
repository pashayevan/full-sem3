#include <deque>
#include <iostream>
#include <array>

int main() {
	std::deque<int> d{1,2,3,4};
	d.push_back(5);
	d.push_back(6);
	d.pop_back();
	d.push_front(0);
	d.push_front(-1);
	d.pop_front();
	for(size_t i=0; i!=d.size(); ++i){
		std::cout<<d[i]<<"\n";
	}
	for (int x:d) {
		std::cout<<x<<"\n";
	}
}
