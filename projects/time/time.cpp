#include "time.h"
#include <iostream>
using namespace chron;
Time::Time(int h, int m, int s):
	hours(h),minutes(m),seconds(s) {
		normalise();
		}
	/*
	if(s<0 || s>59){
		//...
	}
	if(m<0 || m>59){
		//...
	}	
	if(h<0 || h>23){
		//...
	}*/
			
int Time::GetHours() const{
	return hours;
}

int Time::GetMinutes() const{
	return minutes;
}

int Time::GetSeconds() const{
	return seconds;
}

void Time::AddSeconds(int s){
	seconds+=s;
	normalise();
}

void Time::normalise(){
			minutes+=seconds/60;
			seconds%=60;
			while (seconds<0) {
				minutes-=1;
				seconds+=60;
			}
			hours+=minutes/60;
			minutes%=60;
			while(minutes<0){
				hours-=1;
				minutes+=60;
			}
			hours%=24;
			while(hours<0){
				hours+=24;
			}
		}
		
		Time& Time::operator +=(int s) {
		seconds+=s;
		normalise();
		return *this;
	}
	Time Time::operator+ (int s) const{
		return Time(hours,minutes,seconds+s);
	}

int Time::TotalSeconds() const{
	return seconds+60*minutes+hours*3600;
}
int operator - (const Time&t1, const Time&t2){
	return t1.TotalSeconds()-t2.TotalSeconds();
}
std::ostream& operator<<(std::ostream& out,const chron::Time& t){ 
	out<<t.GetHours()<<":"<<t.GetMinutes()<<":"<<t.GetSeconds();
	return out;
}
