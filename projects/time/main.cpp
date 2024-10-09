#include <iostream>
#include "time.h"

bool isAfternoonTime(const chron::Time& time) {
	return time.GetHours()>=12;
}

int main() {
	/*
	 * chron::Time t(13,30,0);
	if(isAfternoonTime(t)){
	std::cout << t.GetHours()-12 << "PM\n";
}
*/
	chron::Time t1(10,18,-5);
	chron::Time t2;
	chron::Time t3(3600);
	
	std::cout<<t1.GetHours()<<'.'<<t1.GetMinutes()<<'.'<<t1.GetSeconds()<<"\n";
	std::cout<<t2.GetHours()<<'.'<<t2.GetMinutes()<<'.'<<t2.GetSeconds()<<"\n";
	std::cout<<t3.GetHours()<<'.'<<t3.GetMinutes()<<'.'<<t3.GetSeconds()<<"\n";
	t3.AddSeconds(1000);
	std::cout<<t1.TotalSeconds()<<'.'<<t2.TotalSeconds()<<'.'<<t3.TotalSeconds()<<"\n";
	std::cout<<t1.TotalSeconds()-t2.TotalSeconds()<<"\n";
}

