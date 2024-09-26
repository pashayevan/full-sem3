#include <iostream>
#include <string>
#include <vector>

 struct Point {
	double x=0.0;
	double y=0.0;
	double z=0.0;
}; 

int Max(int x, int y) {
	if(x>y) 
	return x;
	else
	return y;
}

template<typename T> T Max(const T& x, const T& y) {
	if(x>y) 
	return x;
	else 
	return y;
}

template<typename T> const std::vector<T>& Max(const std::vector<T>& v1, const std::vector<T>& v2)
{
	if (v1.size()>v2.size()) {
		return v1;
	} else if(v1.size()<v2.size()) {
		return v2;
	} else if (v1>v2) {
		return v1;
	} else {
		return v2;
	}
}

int main() {
	std::cout<<Max(1,2)<<"\n";
	std::vector<int> v1={1,2,3};
	std::vector<int> v2={4,5};
	//std::cout<<Max<double>(3.14159,2.71828)<<"\n";
	//std::string word1{"hello"};
	//std::string word2{"world"};
	//std::cout<<Max(word1,word2)<<"\n";
	for(const int& x:Max(v1,v2)){
		std::cout<<x<<" ";
	}
	std::cout<<"\n";
	return 0;
}
