#include<stdio.h>
#include<conio.h>

void main () {

	/* Input Month & Year */
	int summaryDate, month, years;
   printf("\t\tCount date of month of year\n\n");
   printf("Input month: "); scanf("%d", &month);
   printf("Input years: "); scanf("%d", &years);

   /* Month Of 30 day */
   if ( month <= 12 && years >= 1800 && years <= 2020) {
   	switch (month) {
      	case 2 : {
   			/* Calculate Leap Years */
   			if ( years % 4 == 0 ) summaryDate = 29;
      		else summaryDate = 28; break;
         }
      	case 4 : summaryDate = 30; break;
         case 6 : summaryDate = 30; break;
         case 9 : summaryDate = 30; break;
         case 11 : summaryDate = 30; break;
         default: summaryDate = 31;
      }
   	/* Display Result */
		printf("Your ( month: %d ) and ( year: %d ) = %d days", month, years, summaryDate);
   } else printf("You've input wrong  ! Please try again");

   getch();

}