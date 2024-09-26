#include <iostream>
#include <string>

struct Point {
	double x,y,z;
};
int main() {
	Point p={3.0,4.0,5.0};
	Point* ptr=&p;
	std::cout<<(*ptr).x<<"\n";
	std::cout<<ptr->x<<"\n";
}
