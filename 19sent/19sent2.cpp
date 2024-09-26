#include <iostream>
#include <vector>

int main() {
	const std::vector<int>v={1,3,5};
	std::cout<<v.size()<<"\n";
	//v.clear(); ошибка компиляции
	//v[0]=0; тоже ошибка
	
}
