#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct worker{
	int id;
   char name[20];
   char sex;
   float salary, hour, rate, income;
};

void inputAll(worker a[], int n){
	for (int i = 0; i < n; i++) {
      printf("Id= ");
      scanf("%d", &a[i].id); fflush(stdin);
      printf("\nName= ");
      gets(a[i].name);
      printf("\nSex= ");
      scanf("%c", &a[i].sex);
      printf("\nSalary= ");
      scanf("%f", &a[i].salary);
      printf("\nHour= ");
      scanf("%f", &a[i].hour);
      printf("\nRate= ");
      scanf("%f", &a[i].rate);
      a[i].income = a[i].salary + (a[i].hour * a[i].rate);
   }
}

void outputAll(worker a[], int n){

	for (int i = 0; i < n; i++) {
      printf("\n\nId= %d", a[i].id);
      printf("\nName= %s", a[i].name);
      printf("\nSex= %c", a[i].sex);
      printf("\nSalary= %.2f", a[i].salary);
      printf("\nHour= %.2f", a[i].hour);
      printf("\nRate= %.2f", a[i].rate);
      printf("\nIncome= %.2f", a[i].income);
   }
}

float totalExpense(worker a[], int n){
	float total = 0;
	for(int i = 0; i < n; i++){
   	total += a[i].income;
   }
   return total;
}

void main(){

	//int size = 2; char *p1; float total;
   //worker p[2];
   //inputAll(p, size);
   //outputAll(p, size);
   //printf("\nSearch people= "); fflush(stdin);   //total = totalExpense(p, size);   // Dynamic Array   worker *a; int n; float total;   printf("Amount of worker= "); scanf("%d", &n);   a = (worker*)calloc(n, sizeof(worker));   printf("\nInput data of all worker\n\n");   inputAll(a, n);   outputAll(a, n);
   getch();


}