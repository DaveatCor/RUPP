/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a, b, *p, *q;
    
    a = 35;
    
    b = 95;
    
    p = &a;
    
    q = &b;
    
    // Pointer is a variable that point to other variable's address and contain that variable's value, 
    //*p = 75; // A = 75; *P = 75;
    
    //*q = 55; // B = 35; *q = 55;
    
    // When Two Pointer Assign To Each Other. It's Mean Both Pointer Point To The Same Address. Pointer Will Point To The Second Variable That First Variable Assigned 
    //p = q; // Point To Address B Together.
    
    // It's Mean A equal Pointer That Point To B. That's Pointer Q;
    a = *&b; 
    
    printf("A %d", a);
    
    printf("\nB %d", b);
    
    printf("\n*P %d", *p);
    
    printf("\n*Q %d", *q);

    return 0;
}
