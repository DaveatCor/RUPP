#include<stdio.h>
#include<conio.h>

void main() {
	/* Declare variable */
	long CONSUMPTION1, CONSUMPTION2, CONSUMPTION;
   int CINTRI = 4000;
   int total;
   printf("\t\tCalculate total balance of consumption\n\n");
   printf("Input your previous used: "); scanf("%d", &CONSUMPTION1);
   printf("Input your current used: "); scanf("%d", &CONSUMPTION2);

	CONSUMPTION = CONSUMPTION1 + CONSUMPTION2;
	/* Calculate */
	if (CONSUMPTION < 50) total = CONSUMPTION * 500;
   else if (CONSUMPTION >= 50 && CONSUMPTION < 100) total = CONSUMPTION * 650;
   else if (CONSUMPTION >= 100 && CONSUMPTION < 200 ) total = CONSUMPTION * 700;
   else if (CONSUMPTION >= 200) total = CONSUMPTION * 780;
   total += CINTRI;
   printf("\nYour total amount: %d Riel", total);
   getch();
}