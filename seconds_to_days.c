// Hugh McKeeney 

// convert seconds to days, hours, minutes and seconds
#include <stdio.h>

void convert_time ( int total_secs, int *days, int *hours, int * minutes, int * seconds );
								
								
int main ( void )
{
	int total_secs;
	int days;
	int hours;
	int minutes;
	int seconds;
	
	printf("Enter the number of seconds\n");
	scanf("%d", &total_secs);
	
	convert_time ( total_secs ,&days, &hours ,& minutes , & seconds ) ;
	printf ("%d Days\n%d Hours\n%d Minutes\n%d Seconds", days, hours ,minutes ,seconds ) ;
	
	return 0;
}

void convert_time ( int total_secs, int *days, int *hours, int * minutes, int * seconds )
									
{
	int d,h, m, s;
	int remaining_secs = total_secs ;
	d = remaining_secs / (24*60*60);
	remaining_secs %= (24*60*60);
	h = remaining_secs / (60*60) ;
	remaining_secs %= (60*60) ;
	m = remaining_secs / 60;
	remaining_secs %= 60;
	s = remaining_secs ;
	* days = d;
	* hours = h;
	* minutes = m;
	* seconds = s;
}