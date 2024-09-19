#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct Date{
	int year=1970;
	int month=1;
	int day=1;
};
bool operator< (const Date& lhs, const Date& rhs) { //bool compare работать не будет
	//return std::tie(lhs.year,lhs.month,lhs.day)<std::tie(rhs.year,rhs.month,rhs.day);} то же самое 
	if (lhs.year !=rhs.year) {
		return lhs.year<rhs.year;
		}
		if (lhs.month !=rhs.month) {
		return lhs.month<rhs.month;
		}
		return lhs.day<rhs.day;
}

int main() {
	std::vector<Date> dates= {
		{2020,3,5},
		{2019,1,21},
		{2021,1,30}
	};
	std::sort(dates.begin(),dates.end());
	for(const auto&[year,month,day]:dates) {
		std::cout<<year<<"."<<month<<"."<<day<<"\n";
		
		
	}
}
