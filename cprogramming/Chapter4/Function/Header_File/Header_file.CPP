#include"fheader.h"
#include<stdio.h>
#include<conio.h>

void main () {
	long sum = 0; int n;
   printf("Input number: "); scanf("%d", &n);
   sum = sum+factorial(n);
   printf("Factorial= %ld", sum);
	getch();
}
