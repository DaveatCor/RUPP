#include<stdio.h>
#include<conio.h>

void main () {
	int num, temp = 0;
	printf("Input number: "); scanf("%d", &num);
   if ( num > 0 ) {
   	printf("Number= 1 ");
		for ( int i = 2; i <= num; i++ ) { /* Program Start */
      	for ( int j = 2; j <= i; j++ ) {
         	if ( i % j == 0 ) { /* If i % j = 0 assign temp = i and break */
            	temp = j;
               break;
            }
         }
         if ( temp == i ) { /* if value temp == i display number else do nothing */
         	printf("%d ", i);
         }
      }
   } else printf("Please input number that greater than 0");
   getch();
}