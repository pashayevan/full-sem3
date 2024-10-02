#include <algorithm>
#include <iostream>
#include <vector>

int main() {
	std::vector<int> data{1,4,5,9,9,13,47};
	auto iter1=std::lower_bound(data.begin(),data.end(),8);  //не меньше 8
	auto iter2=std::upper_bound(data.begin(),data.end(),47); //строго больше 47 (от того, к чему пришли выше)
	std::cout<<*iter1<<"\n";
	//std::cout<<*iter(2-1)<<"\n";
	for(auto iter=iter1;iter!=iter2;++iter){
		std::cout<<*iter<<" ";
	}
	std::cout<<"\n";
}
