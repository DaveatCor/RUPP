#include<stdio.h>
#include<conio.h>

void findHighAverage(long id[], float average[], int amount){
	int high_average = 0;
   for (int i = 1; i < amount; i++){
   	if (average[high_average] < average[i]) {
      	high_average = i;
      }
   }
   printf("\nThe high average is student id = %ld\n", id[high_average]);
   printf("Average = %.2f", average[high_average]);
}

void main() {
	int amount;
   long id[100];
   float average[100];
   printf("\t\tStudent information");
   printf("\n\nInput amount user = "); scanf("%d", &amount); fflush(stdin);
   for ( int i = 0; i < amount; i++ ){
   	again:
   		printf("\n\tStudent %d", i + 1);
      	printf("\nID = "); scanf("%d", &id[i]); fflush(stdin);
         for (int j = 0; j < i; j++){
         	if ( id[i] == id[j] ) {
            	clrscr();
               printf("Duplicate student id ! Please input again\n");
         		goto again;
         	}
         }
      	printf("Average = "); scanf("%f", &average[i]); fflush(stdin);
   }
   findHighAverage(id, average, amount);
	getch();
}