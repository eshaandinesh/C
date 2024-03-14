#include <stdio.h>

int main()
{
    int num;
    int final = 0;
    int prod = 1;
    printf("Enter a 3x3 matrix values one by one: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &num);
            prod *= num;
        }
        final += prod;
        prod = 1;
    }
    printf("Sum of product of rows: %d", final);
}
