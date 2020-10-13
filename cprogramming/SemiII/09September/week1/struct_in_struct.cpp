#include<stdio.h>
#include<conio.h>

void main(){
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

   people p = {1, "Daveat", 'M', {12, 3, 1999}};


}
