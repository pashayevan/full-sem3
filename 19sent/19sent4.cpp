#include <iostream>
#include <vector>

int main() {
	const int cx=42;
	//int& ref=cx; ошибка 
	const int& cref=cx;
	//int* ptr=&cx; ошибка
	const int* cptr=&cx;
	
	std::cout<<cx<<"\n";
}
