#include <iostream>
#include <stack>
#include <list>

int main() {
	std::stack<int> s;
	s.push(1);
	s.push(13);
	s.pop();
	std::cout<<s.top()<<"\n";
	if(s.empty())
	{
		std::cout<<"stack is empty\n";
	}
	return 0;
}
