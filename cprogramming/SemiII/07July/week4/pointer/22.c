/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int *search(int a[], int n, int x){
    int *p;
    p = NULL;
    for (int i = 0; i < n; i++){
        if(x == a[i]){
            p = &a[i];
            break;
        }
    }
    return p;
}

int main()
{
    int *ptr, x[7] = {58, 1, 3, 10, 25, 70, 12};
    int data;
    
    printf("Input number: "); scanf("%d", &data);
    
    ptr = search(x, 7, data);
    
    printf("Searched: %d", *ptr);

    return 0;
}
