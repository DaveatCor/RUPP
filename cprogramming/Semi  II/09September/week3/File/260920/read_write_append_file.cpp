#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

void writeData(char *name){

	FILE *f; char ch;

   f = fopen(name, "w");

   again:
   	ch = getchar();
   	if (ch != '#'){
      	fputc(ch, f);
         goto again;
   	}
   exit(0);
}

void readData(char *name){

	FILE *f; char ch;
   f = fopen(name, "r");

   while(1){
   	ch = fgetc(f);
      printf("%c", ch);
      if (ch == EOF){
      	getch();
      	break;
      }
   }
   exit(0);
}

void main(){

	FILE *f;

   //writeData("second_file.txt");

   readData("second_file.txt");

   fclose(f);

   getch();
}
