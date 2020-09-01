#include <stdio.h>
#include <string.h>

int main() {

    struct students {
        int id;
        char name[20];
        char sex;
        float average;
    };
    
    struct students *x, p;
    
    // Pointer To Structure
    
    x = &p;
    
    x->id=123;
    strcpy(x->name, "Chan dara");
    x->sex = 'M';
    x->average = 75;
    printf("Id: %d\n",  x->id);
    printf("Name: %s\n", x->name);
    printf("Sex: %d\n",  x->sex);
    printf("Average: %.2f\n", x->average);

    return 0;
}