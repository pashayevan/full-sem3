#include <iostream>
#include <vector>
#include <string>

int main() {
	int* ptr=nullptr;
	{
		int x=42;
		ptr=&x;
	}
	std::cout<<*ptr<<"\n";
	
	//скомпилируется, но так делать нельзя 
	}
