#ifndef TIME_H
#define TIME_H
#include <iostream>
namespace chron {		//пространсво имен 
	class Time{
	private:
		int hours=0;
		int minutes=0;
		int seconds=0;
		
		void normalise();
	public:
		Time()=default;
		Time(int h, int m, int s);
		Time(int s):Time(0,0,s){
		}
		int GetHours() const;
		int GetMinutes() const;
		int GetSeconds() const;
		
		void AddSeconds(int s);
		int TotalSeconds()const;
		
		Time& operator +=(int s); 
		Time operator +(int s) const;
	};
	
}
std::ostream& operator<<(std::ostream& out,const chron::Time& t);

#endif //TIME_H
