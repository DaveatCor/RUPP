#include<stdio.h>
#include<conio.h>
#include<stdlib.h> // FILE

struct student {
	int id;
   char name[20];
   char sex;
   float average;
};

void outputAll(student a[], int n){
	for (int i = 0; i <n; i++){
   	printf("%d\t%s\t\t%c\t%f\n", );
   }
}

void main(){
	
}

void readFile(char a[], FILE *f){
	int data[150];
	f = fopen(a, "rb");
   int i = 0;
	while(1){
   	fread(&data, sizeof(int), 1, f);
      if (feof(f))break;
      printf("Index: %d\n", data);
      i++;
   }
   getch();
}

void writeBFile(char a[], FILE *f){
	f = fopen(a, "wb");
   int i = 10;
   //for (int i = 0; i<
}

void main(){
	FILE *f; int a[150], n;

   readFile("eee4.bin", f);

   fclose(f);
	getch();
}