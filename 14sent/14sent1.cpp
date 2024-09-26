#include <iostream>
#include <vector>
#include <string>
int main() {
	std::vector<int> data ={1,2,3,4,5};
	for (int elem: data) {
		std::cout<<elem<<	" ";
	}
	std::cout<<"\n";
	std::vector<std::string> v1;
	std::vector<std::string> v2(5);
	std::vector<std::string> v3(5, "hello");		 
			 return 0;
}
