#include<stdio.h>

int main()
{
    int x;
    int *p;
    p=&x;
    int **afzal;
    afzal=&p;
    printf("Enter the value of x:\n");
    scanf("%d",&x);
    
    printf("Value of x: %d\n", x);
    printf("Address of x: %u\n", &x);
    printf("Address of x: %u\n", p);
    printf("Value of x: %d\n", *p);
    printf("Address of x: %u\n", afzal);
    printf("Value of x: %d\n", **afzal);

    return 0;
}