#include <iostream>
#include <vector>

int main() {
	int x=42;
	const int cx=13;
	int* ptr=&x;
	//ptr=&cx; ошибка
	const int* cptr=&x;
	cptr=&cx;
	int*const ptrc=&x;
	//ptrc=nullptr; ошибка 
	++*ptrc;
	const int* const cptrs=&x; 
	
	std::cout<<x<<"\n";
	std::cout<<cx<<"\n";
}
