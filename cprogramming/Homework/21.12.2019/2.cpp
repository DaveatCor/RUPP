#include<stdio.h>
#include<conio.h>

void main () {
	int money_bank=7500;
   int old;
   float  money_per_year = 0.0, temp = 0;
   printf("\t\tProgram to find your money in bank per year\n");
   printf("Input your old: "); scanf("%d", &old);
   if ( old > 0 ) {
   	for ( int i = 1; i <= old; i++ ) {
      	money_bank += 250;  /* Money 250 Birthday Gift From Dad */
         temp = ( money_bank * 7.5 ) / 100; /* 7.5% Of Money Per Year */
         money_per_year = money_bank + temp;
      }
   }
   else printf("Your input must greater than 0");
   printf("Your money per year = %.2f$", money_per_year);
   getch();
}
