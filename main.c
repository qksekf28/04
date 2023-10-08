#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
   int a;
   int sec, min, hour;
   
   printf("input seconds : ");
   scanf("%i", &a);
   
   sec = a%60;
   min = (a%3600)/60; // hard
   hour = a/3600;
   
   printf("The time for %i is %d : %d : %d\n", a, hour, min, sec);

	return 0;
}
