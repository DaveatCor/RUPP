#include<stdio.h>
#include<conio.h>

void main () {
	int num; char *str;
	printf("Input a number: "); scanf("%d", &num);
   switch(num) {
   	case 1: str = "One"; break;
      case 2: str = "Two"; break;
      case 3: str = "Three"; break;
      case 4: str = "Four"; break;
      default: str = "I don't know what the fuck is this number";
   }
   printf("%s", str);
   getch();
}