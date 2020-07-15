#include<stdio.h>
#include<conio.h>
void main () {
	long s; int i, n;
   printf("Input n: "); scanf("%d", &n);
   s = 0;
   i = 1;
   do {
   	s += i;
      i++;
   } while ( i <= n );
   printf("Summary: %ld", s);
   getch();
}