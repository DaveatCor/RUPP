#include<stdio.h>
#include<conio.h>
#include<string.h>

struct birthday{
	int date;
   int month;
   int year;
};

struct people{
   int id;
   char name[20];
   char sex;
   birthday bir;
};

void inputAll(people a[], int n){
	for (int i = 0; i < n; i++) {
      printf("People= ");
      scanf("%d", &a[i].id); fflush(stdin);
      printf("\nName= ");
      gets(a[i].name);
      printf("\nSex= ");
      scanf("%c", &a[i].sex);
      printf("\nBirthday= ");
      scanf("%d", &a[i].bir.date);
      scanf("%d", &a[i].bir.month);
      scanf("%d", &a[i].bir.year);
   }
}

void outputAll(people a[], int n){

	for (int i = 0; i < n; i++) {
      printf("People= %d", a[i].id);
      printf("\nName= %s", a[i].name);
      printf("\nSex= %c", a[i].sex);
      printf("\nBirthday= %d\ %d\ %d\n\n", a[i].bir.date, a[i].bir.month, a[i].bir.year);
   }
}

people *search(people p[], int n, char searchName[]){
	char *a = NULL;

   int found;
	for ( int i = 0; i < n; i++){
   	//strcmpi means not mind about big or small
		found = strcmpi(p[i].name, searchName);
		printf("%d", found);
      if (found == 1) {
      	printf("People searched %s", p[i].name);
         break;
      }

   }
}
void main(){

	int size = 2; char *p1;  char searchPeople[20];

   people p[2];
   inputAll(p, size);
   outputAll(p, size);
   // = {1, "Daveat", 'M', {12, 3, 1999}};
   printf("Search people= "); fflush(stdin); gets(searchPeople);

   search(p, size, searchPeople);

   getch();

}
