#include <iostream>
#include <vector>

int main() {
	int x=42;
	int& ref=x;
	const int& cref=x;
	++x;
	++ref;
	//++cref; ошибка 
	int* ptr=&x;
	const int* cptr=&x;
	++*ptr;
	//++*cptr; ошибка
	int y=20;
	cptr=&y;
		
	std::cout<<x<<"\n";
	std::cout<<y<<"\n";

}
	
