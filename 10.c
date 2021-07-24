#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, digits=0;
    do{
        printf("Please input a positive number: \n");
        scanf("%d", &num);
    }while(num<0);
    while(num>0)
    {
        num = num/10;
        digits++;
    }
    printf("Your number has %d digits", digits);
    return 0;
}
