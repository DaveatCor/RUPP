#include<stdio.h>
#include<conio.h>

int main() {
	int id;
	char name[20];
	char sex;
	float salary;

	printf("Id: "); scanf("%d", &id);
	printf("Name: ");
		//fflush is prevent next that not skip every input ( Clear buffet )
		fflush(stdin);
		scanf("%s", &name);
	printf("Sex: ");
		//fflush is prevent next that not skip every input ( Clear buffet )
		fflush(stdin);
		scanf("%c", &sex);

	printf("Salary:" ); scanf("%f", &salary);

	printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tYour CV\n");
	printf("\nYour Id: %d ", id);
	printf("\nYour name: %s ", name);
	printf("\nYour sex: %c ", sex);
	//( .2 ) only 2 number behind display
	printf("\nYour salary: %.2f", salary);
   getch();
   return 0;
}
