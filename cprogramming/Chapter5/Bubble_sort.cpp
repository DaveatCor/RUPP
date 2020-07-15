#include<stdio.h>
#include<conio.h>

void bubble_sort(float a[], int n){
	float temp;
	for(int i = 0; i < n; i++){
   	for(int j = i+1; j < n; j++){
      	temp = a[i];
      	if (a[i] > a[j]){
         	a[i] = a[j];
            a[j] = temp;
         }
      }
   }              
   printf("\n\nAfter sort: ");
   for ( int i = 0; i < n; i++ ){
   	printf("%.2f\t", a[i]);
   }
}

void main() {
	float a[100]; int n;
   printf("Input length = "); scanf("%d", &n);
   for ( int i = 0; i < n; i++){
   	printf("Input your number = ");
   	scanf("%f", &a[i]);
   }
   printf("\nBefore sort= ");
   for(int i = 0; i < n; i++){
   	printf("%.2f\t", a[i]);
   }
   bubble_sort(a, n);
   getch();

}