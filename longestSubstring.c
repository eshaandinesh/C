#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    char l[50] = {0};
    char s[50] = {0};
    printf("Enter string: ");
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            if (!(strchr(s, str[j])))
            {
                strncat(s, &str[j], 1);
            }
            else
            {
                if (strlen(s) > strlen(l))
                    strcpy(l, s);
                strcpy(s, "");
            }
        }
        if (strlen(s) > strlen(l))
            strcpy(l, s);
        strcpy(s, "");
    }
    printf("The longest substring is: %s", l);
    return 0;
}
