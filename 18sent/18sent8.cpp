#include <iostream>
#include <string>

int main() {
	int x=42;
	int* ptr=&x;
	++x;
	
	std::cout<<*ptr<<"\n";
}
