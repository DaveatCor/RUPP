#include<stdio.h>
#include<conio.h>

void main () {
	long number; int i = 0, temp = 0, j = 0;
   printf("\t\tProgram Reverse number\n");
   printf("Input number: "); scanf("%ld", &number);
   i = number;
   while(i > 0) {
   	temp = i % 10;
      j = j * 10 + temp;
      i /= 10;
   }
   printf("%d", j);
   getch();
}