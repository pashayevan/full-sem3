#include <iostream>
#include <string>

int main() {
	int x=42;
	int& ref=x;
	
	++x;
	std::cout<<ref<<"\n";
}
