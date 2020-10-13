#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

void main(){
	FILE *f; char ch;

   // File name, Mode
   f=fopen("eee4.txt", "r");
   if(f==NULL){
   	printf("Can not open file:\n");
		exit(0);
   }

   while(1){
   	ch = getc(f);
      if(ch == "EOF") break;
      putc(ch, stdin);
   }
   fclose(f);
   getch();
}
