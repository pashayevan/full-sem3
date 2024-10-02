#include <algorithm>
#include <iostream>
#include <vector>
#include <list>

int main() {
	std::vector<int> data{3,14,15,92,6};
	if(std::binary_search(data.begin(),data.end(),5)){
		std::cout<<"Found\n";
	}else{
		std::cout<<"Not found\n";
	}
	return 0;
}
