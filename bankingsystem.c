#include <stdio.h>
#include <stdlib.h>

struct Bank
{
    int accnum;
    float bal;
    char name[50];
    char type[8];
};

void createAcc(struct Bank *b, int *size)
{
    b = (struct Bank *)realloc(b, ((*size) + 1) * sizeof(struct Bank));
    printf("Enter account number: \n");
    scanf("%d", &(b + (*size))->accnum);
    printf("Enter the balance: \n");
    scanf("%f", &(b + (*size))->bal);
    printf("Enter name: \n");
    scanf(" %[^\n]s", (b + (*size))->name);
    printf("Enter type(savings or current): \n");
    scanf("%s", (b + (*size))->type);
    printf("%s account created successfully!\n", (b + (*size))->type);
    (*size)++;
}

void deposit(struct Bank *b, int size)
{
    int id;
    float dep;
    printf("Enter the user: ");
    scanf("%d", &id);
    for (int i = 0; i < size; i++)
    {
        if ((b + i)->accnum == id)
        {
            printf("Enter the amount to be deposited: ");
            scanf("%f", &dep);
            (b + i)->bal = (b + i)->bal + dep;
            printf("Deposit successful!");
        }
        else if (i + 1 == size)
        {
            printf("Invalid input");
        }
    }
}

void withdraw(struct Bank *b, int size)
{
    int id;
    float dep;
    printf("Enter the user: ");
    scanf("%d", &id);
    for (int i = 0; i < size; i++)
    {
        if ((b + i)->accnum == id)
        {
            printf("Enter the amount to be withdrawn: ");
            scanf("%f", &dep);
            (b + i)->bal = (b + i)->bal - dep;
            printf("Withdraw successful!");
        }
        else if (i + 1 == size)
        {
            printf("Invalid input");
        }
    }
}

void display(struct Bank *b, int size)
{
    int id;
    printf("Enter the user: ");
    scanf("%d", &id);
    for (int i = 0; i < size; i++)
    {
        if ((b + i)->accnum == id)
        {
            printf("Number = %d\n", (b + i)->accnum);
            printf("Balance = %f\n", (b + i)->bal);
            printf("Name = %s\n", (b + i)->name);
            printf("Type = %s\n\n", (b + i)->type);
        }
        else if (i + 1 == size)
        {
            printf("Invalid input");
        }
    }
}

int main()
{
    int size = 0;
    struct Bank *users;
    users = (struct Bank *)malloc(sizeof(struct Bank));
    int ch = 0;
    while (ch != 5)
    {
        printf("Banking System\n");
        printf("1. Create a new account\n");
        printf("2. Deposit money\n");
        printf("3. Withdraw money\n");
        printf("4. Display account details\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            createAcc(users, &size);
            break;
        case 2:
            deposit(users, size);
            break;
        case 3:
            withdraw(users, size);
            break;
        case 4:
            display(users, size);
            break;
        case 5:
            printf("Exiting the program. Goodbye!");
            free(users);
            return 0;
            break;
        default:
            printf("Invalid choice");
            free(users);
            return 0;
        }
    }
}
