#include<stdio.h>
#include<conio.h>

void inputsalary(float salary[], int n){
	for (int i = 0; i < n; i++){
   	printf("Input salary person %d = ");
      scanf("%f", &salary[i]);
   }
}

void main () {
	float salary[100];
   inputsalary(salary, 3);
   printf("%f", salary[0]);
   getch();
}
