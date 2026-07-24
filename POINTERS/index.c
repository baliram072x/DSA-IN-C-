#include<stdio.h>

int main()
{
    int a = 10;
    int *p = &a;

    printf("%d\n", a);   // value
    printf("%p\n", p);    // address
    printf("%d" , *p); // value


    return 0;
}


// a      -> value

// &a     -> address

// p      -> address

// *p     -> value