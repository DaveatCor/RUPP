#include<stdio.h>
#include<conio.h>
int x = 10; /* Global Variable */
void sample(int a){ /* Function */
	int s = 0;
   s+=a;
   x+=s;
   printf("S= %d\n", s);
   printf("X= %d\n", x);
}

void main() {
   int b = 20; /* Local Variable */
   sample(b); /* Function */
   x+=b;
   printf("X= %d\n", x);
	getch();
}