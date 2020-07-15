#include<stdio.h>
#include<conio.h>

void main() {
	int a, b, c, max;
   printf("\t\tProgram find maximum of 3 number\n\n");
   printf("Input first number: "); scanf("%d", &a);
   printf("Input second number: "); scanf("%d", &b);
   printf("Input third number: "); scanf("%d", &c);

   /* Find maximum number */
   if (a > b) max = a;
   else if ( b > c ) max = b;
   else if ( c > a ) max = c;

   printf("\nMaximum of three number= %d", max);

	getch();
}