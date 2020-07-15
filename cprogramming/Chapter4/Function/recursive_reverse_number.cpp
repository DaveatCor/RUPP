#include<stdio.h>
#include<conio.h>

void reverse(long number, long &r, int &sum) {
	//long sum = 0;
   if (number == 0) printf("Helllo world");
   else {
   	r = sum * 10 + (number % 10);
		printf("%d", r);
      //printf("%ld", r);
      reverse(number/10, r, sum);
   }
}

void main () {
	long number, r = 0, sum = 0;
   printf("Input number: "); scanf("%ld", &number);
   reverse(number, r, sum);
   printf("Reverse number = %ld", r);
	getch();
}
