/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/* Pointer */

#include <stdio.h>
#include <conio.h>

void maxMin(float a[], int n, float *min, float *max){

    *max = a[0]; *min = a[0];

    for (int i = 1; i < n; i++){
        if (*max < a[i]) *max = a[i];
        if (*min > a[i]) *min = a[i];
    }

}

int main()
{

    // float max, min, a[7] = {45, 75, 0, 10, 25, 55, 16};

    // printf("After swapping\n");

    // maxMin(a, 7, &min, &max);

    // printf("Min %.2f\n", min);
    // printf("Max %.2f\n", max);
    printf("Hello world");
    // getch();
}
