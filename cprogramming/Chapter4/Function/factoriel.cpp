#include<stdio.h>
#include<conio.h>
                         
/*--------------Factorial-------------- */
/*int factoriel(int number, int temp) {  Function Calculate Factoriel
	int j = 1;
	for (int i = 1; i <= number; i++) {
   	j *= i;
      temp += j;
   }
	return temp;
}*/

/*void factorial(int n, long &v){ // Reference Parameter, Monday 30/12/2019
	long temp = 0;
  	int j = 1;
   for (int i = 1; i <= n; i++) {
   	j *= i;
      temp += j;
   }
   v = temp;
} */

void factorial(int n, long *v){ // By Pointer, Monday 30/12/2019
	long temp = 0;
  	int j = 1;
   for (int i = 1; i <= n; i++) {
   	j *= i;
      temp += j;
   }
   *v = temp;
}

/*--------------PGCD-------------- */
int pgcd(int a, int b){
	while(a!=b){
   	if (a>b) a-=b;
      else b-=a;
   }
   return a;
}

void main () {
	int number, b, temp = 0; long sum = 0; 
	//printf("Input number: "); scanf("%d", &number);
	printf("Input a: "); scanf("%d", &number);
   printf("Input b: "); scanf("%d", &b); // Monday 30/12/2019
   if (number > 0) {
   	/*--------------Factorial-------------- */
   	//sum = factorial(number, temp); Expression = Return Type
      // factorial(number, sum); // Reference Parameter, Monday 30/12/2019
      factorial(number, &sum); // By Pointer, Monday 30/12/2019
		/*--------------PGCD-------------- */  // Monday 30/12/2019
		sum = pgcd(number, b);
      printf("Result= %ld", sum);
      getch();
   } else printf("Your number must greater than 0");
}