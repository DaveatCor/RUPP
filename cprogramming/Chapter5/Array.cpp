#include<stdio.h>
#include<conio.h>

void main() {
	int size;
   int a[100];
   printf("Input length= "); scanf("%d", &size);
	for ( int i = 0; i < size; i++) {
   	printf("Input number [%d] = ", i);
      scanf("%d", &a[i]);
   }                              
   printf("Result = ");
   for (int i = 0; i <size; i++ ){
   	printf("%1d\t", a[i]);
   }
   getch();
}