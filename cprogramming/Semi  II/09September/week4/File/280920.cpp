#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


//void writeData(char *file_path){
//	FILE *f; char ch;
//   f = fopen(file_path, "r");
//   if (f == NULL){
//   	printf("Can not open file");
//      getch();
//      exit(1);
//      getch();
//   }
//   printf("Hello world");
//   fclose(f);
//   getch();
//}

struct Data{
	char name[20];
	int id;
};

void edit(Data data[], int index){
	printf("Id: "); scanf("%d", &data[index].id); 
	printf("name: "); gets((*(data+index)).name);
}

void display(Data data[], int size){
	for(int i = 0; i< size; i++){
   	printf("Index %d = %d\n", i, (data+i)->id);
   }
}

void main(){
    //writeData("data.txt");
    Data data[2];
    for (int i = 0; i < 2; i++){ 
		printf("name: "); gets((*(data+i)).name);
    	printf("Id: "); scanf("%d", &(data+i)->id); fflush(stdin);
    }
                
    printf("\n\nEdit\n");
    edit(data, 1);
    printf("\n\nDisplay\n");
    display(data, 2);
    getch();
}
