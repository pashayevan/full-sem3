#include <iostream>
#include <string>

int main() {
	int x=42;
	int y=20;
	int* ptr;
	ptr=nullptr;
	ptr=&x;
	
	std::cout<<*ptr<<"\n";
	ptr=&y;
	std::cout<<*ptr<<"\n";

}
