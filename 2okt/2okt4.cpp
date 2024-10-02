#include <iostream>
#include <algorithm>
#include <map>
#include <utility>

int main() {
	std::map<int,int> m{
		
		{1,30},
		{2,28},
		{3,31}
	};
	auto it1=m.find(12);
	//auto it2=std::find(m.begin(),m.eng(),12);
	std::pair<const int, int> value {12,31};
	auto it3=std::find(m.begin(),m.end(), value);
	
	return 0;
}
