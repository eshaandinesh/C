#include <stdio.h>
#include <math.h>

void Happy(int num)
{
    int calc = 0;
    if (num < 10)
    {
        if (num == 1)
        {
            printf("Happy number");
            return;
        }
        else
        {
            printf("Not a happy number");
            return;
        }
    }
    else
    {
        for (int i = num; i > 0; i /= 10)
        {
            calc += (int)pow(i % 10, 2);
        }
    }
    Happy(calc);
}

int main()
{
    int num;
    printf("Enter the 2 digit number: ");
    scanf("%d", &num);
    if (num > 100 || num < 0)
    {
        printf("Invalid entry");
        return 0;
    }
    else
    {
        Happy(num);
    }
    return 0;
}
