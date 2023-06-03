// Given as input an integer number of seconds, write a program to print as output the equivalent
// time in hours, minutes and seconds. Recommended output format is something like 7322
// seconds is equivalent to 2 hours 2 minutes 2 seconds.

#include <stdio.h>

int main() {
    int sec, h, m, s;
	printf("Input seconds: ");
	scanf("%d", &sec);
	h = (sec/3600); 
	m = (sec -(3600*h))/60;
	s = (sec -(3600*h)-(m*60));
	printf("%d hours %d minutes %d seconds\n",h,m,s);
	return 0;
}