#include<stdio.h>
#include<conio.h>

void main(){
	int a, b, *p;//  P is pointer or p store address of variale
   p=&a; // P is pointer or store address of variable a
   a = 10;
   printf("A %d", a);
   printf("P %d", *p);
   getch();
}
