#include<stdio.h>
#include<conio.h>

void main() {
	int score; char grade;
   printf("Input score: "); scanf("%d", &score);
   if (score >= 85 ) grade = 'A';
   else if (score >= 70 && score<85) grade = 'B';
   else if (score >= 60 && score<70) grade = 'C';
   else if (score >= 50 && score<60) grade = 'D';
   else grade = 'F';

	printf("Your score %d = ", score);
   printf("is grade %c", grade);
   getch();
}