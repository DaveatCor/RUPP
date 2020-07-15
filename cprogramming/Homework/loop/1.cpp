#include<stdio.h>
#include<conio.h>

void main () {
	int n, a, i = 1, temp;
   long sum = 0;
	printf("Input A: "); scanf("%d", &a);
	printf("Input N: "); scanf("%d", &n);
   if ( n > 0 ) {
     	while (i <= n) {
      	temp = a * i;
         sum += temp;
         i++;
     	}
      printf("Pow of number= %ld", sum);
   } else {
   	printf("Invalid input");
   }
   getch();
}
