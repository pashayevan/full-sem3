#include <algorithm>
#include <iostream>
#include <string> 
#include <tuple>
#include <unordered_map> 
#include <vector>

int main (){
	std::unordered_map<std::string,int >fregs;
	std::string word;
	
	while(std::cin>>word) {
		++fregs[word];
	}
	
	std::vector<std::pair<std::string,int>>sortedByFreg(
	fregs.begin(),
	fregs.end());
	
	std::sort(sortedByFreg.begin(),
	sortedByFreg.end(),
	[](const auto& p1,const auto p2){
	return std::tie(p2.second,p1.first)<std::tie(p1.second,p2.first);});
	for(const auto& elem:sortedByFreg)
	{
		std::cout<<elem.second<<elem.first<<"\n";
	}
}
	
