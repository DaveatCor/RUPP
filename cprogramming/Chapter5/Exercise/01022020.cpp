#include<stdio.h>
#include<conio.h>

void output(int a[], int i){
	printf("%5d", a[i]);  // Number In Address is amount of space
}

void main (){
	//If Size Array 10 But Give Value Only 8, The Last Two Index Initialize with Default Number
	int a[8] = {45, 72, 37, 92, 81, 51, 19, 28};
	for ( int i = 0; i < 8; i++){
   	output(a, i);
   }
	getch();
}