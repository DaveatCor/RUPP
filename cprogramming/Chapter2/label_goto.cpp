#include<stdio.h>
#include<conio.h>

void main () {
	long s; int n, i; char ch;
   printf("Input a number:"); scanf("%d", &n);
   s = 0; i = 1;
   sum : /* Label */
   	s =  s+i;
      i++;
   	printf("Sum = %ld", s);
      printf("\nInput c to continue q to quit: "); fflush(stdin); ch = getchar();
		if ( ch == 'c' ) goto sum;;
   getch();
}