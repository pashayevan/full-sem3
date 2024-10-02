#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	std::vector<int> data{2,7,1,8,2,8};
	int counter=0;
	for (int elem:data) {
		if (elem==8){
			++counter;
		}
	}
	std::cout<<counter<<"\n";
}
