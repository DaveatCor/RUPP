#include<stdio.h>
#include<conio.h>
void sort(int a[], int n){
	int temp = 0;
   for ( int i = 0; i < n; i++){ //i = 7
   	if( i == n-1 ) break; //Prevent i = 7 to stop execute
   	for (int j = i+1; j < n; j++){   //j=i+1= 7
         temp = a[i]; // temp = 6 = 89;
      	if (a[i] > a[j]){
         	a[i] = a[j];
            a[j] = temp;
         }
      }
   }
	for (int i = 0; i < n; i++){
   	printf("Sort: %d\n", a[i]);
   }
}

void main (){
	int a[8] = {45, 12, 1, 20, 30, 50, 89, 2};
   sort(a, 8);
	getch();
}