#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

void main(){
	FILE *f; char ch;
   f=fopen("eee4.txt", "w");
   if(f==NULL){
   	printf("Can not open file:\n");
		exit(0);
   }

   while(1){
   	ch = getch();
   	if(ch=='#') break;
   	putc(ch, f);
   }
   fclose(f);
   getch();
}
