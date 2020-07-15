#include<stdio.h>
#include<conio.h>
#include<math.h>

void main() {
	//Absist
	int xa, xb, xc;

   //Coordinate of a-b, b-c, c-a
   int ya, yb, yc;

   //Distance from a-b, b-c, c-a
   float  d1, d2, d3;

   //pak ri mart
   float p;

   //krola ptey
   float s;

   printf("\t\t\tCalculate of distance\n");
   printf("\t\t\tCalculate S\n");
   printf("\nPlease input positive number\n");

   printf("\nInput absist xA: "); scanf("%d", &xa);
   printf("Input coordinate digit number yA: "); scanf("%d", &ya);

   printf("\nInput absist xB: "); scanf("%d", &xb);
   printf("Input coordinate digit number yB: "); scanf("%d", &yb);

   printf("\nInput absist xC: "); scanf("%d", &xc);
   printf("Input coordinate digit number yC: "); scanf("%d", &yc);

   //Calculate distance
   d1 = sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
   d2 = sqrt((xb-xc)*(xb-xc)+(yb-yc)*(yb-yc));
   d3 = sqrt((xc-xa)*(xc-xa)+(yc-ya)*(yc-ya));

   p = (d1+d2+d3)/2;

   s = sqrt(10);

	printf("\nP = %.2f", p);
   printf("\nS = %.2f", s);

   getch();


}

