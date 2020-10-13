#include<stdio.h>

#include<conio.h>
#include<string.h>struct Birthday {	int date;   int month;   int year;};struct Student{
   int id;
   char sex;
};
void main(){   Student stu1 = {1, 'M'};   printf("%d", stu1.id);	getch();
}
