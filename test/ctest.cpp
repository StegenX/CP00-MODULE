#include <iostream>
#include <iomanip>
#include <unistd.h>
#include <ctime>

using namespace std;




int main ()
{
	time_t t = time(NULL);
	cout <<  "Time In Seconds = " << t << endl;
	tm *p = localtime(&t);
	
	cout  << "Year = " << 1900 + p->tm_year  
	<< " Day = " << p->tm_mday << " Hour = " 
	<< p->tm_hour << " Minutes = " << p->tm_min << endl;

	cout << setfill('X') << setw(10) << "aymane" << endl;
}