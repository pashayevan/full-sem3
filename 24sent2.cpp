#include <iostream>
#include <string>

/*/ int Max(int x, int y) {
	if(x>y) 
	return x;
	else
	return y;
}
/*/

template<typename T>
T Max(const T& x, const T& y) {
	if(x>y) 
	return x;
	else 
	return y;
}

int main() {
	std::cout<<Max(1,2)<<"\n";
	std::cout<<Max(3.14159,2.71828)<<"\n";
	std::string word1{"hello"};
	std::string word2{"world"};
	std::cout<<Max(word1,word2)<<"\n";
	return 0;
}
