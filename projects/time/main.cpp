#include <iostream>
#include "time.h"

bool isAfternoonTime(const chron::Time& time) {
	return time.GetHours()>=12;
}

int main() {
	chron::Time t(13,30,0);
	if(isAfternoonTime(t)){
	std::cout << t.GetHours()-12 << "PM\n";
}
}
