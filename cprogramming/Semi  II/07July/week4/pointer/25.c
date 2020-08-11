// 25/07/2020

// Pointer

#include <stdio.h>
#include <conio.h>

int main()
{
    int i;
    int *p, x[7] = {10, 20, 11, 23, 51, 22, 12};
    p = &x[2];
    
    for (i = 0; i < 7; i++){
        printf("Array: %d", *(x+i));
    }
    getch();

}
