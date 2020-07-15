#include<stdio.h>
#include<conio.h>
void main () {
	long s; int n;
   printf("Input n: "); scanf("%d", &n);
   for (int i = 0;; i < 10; i++) {
   	s += i;
      i++;
   }
   printf("Sum= %ld", s);
	getch();
}