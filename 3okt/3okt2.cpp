#include <iostream>
#include <queue>
int main() {
	std::queue<int>s;
	s.push(1);
	s.push(13);
	std::cout<<s.front()<<"\n";
	std::cout<<s.back()<<"\n";
	s.pop();
	if(s.empty()){
		std::cout<<"Queue is empty\n";
	}
	return 0;
}
