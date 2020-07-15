#include<stdio.h>
#include<conio.h>

void output(int a[][9][9]){
	printf("%d", a[0][0]);
}

void main(){
	int a[9][9][9];
   output(a);
}