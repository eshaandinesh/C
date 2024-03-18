#include <stdio.h>
#include <stdlib.h>

int **initialize(int *p, int *q)
{
    printf("Enter the rows and columns: ");
    scanf("%d %d", p, q);

    int **matrix = (int **)malloc((*p) * sizeof(int *));
    for (int i = 0; i < (*p); i++)
        matrix[i] = (int *)malloc((*q) * sizeof(int));

    return matrix;
}

int Check(int row, int col, int **matrix, int p, int q)
{
    int area = 1;
    matrix[row][col] = 0;
    if (row > 0 && matrix[row - 1][col] == 1)
    {
        area += Check(row - 1, col, matrix, p, q);
    }
    if (col > 0 && matrix[row][col - 1] == 1)
    {
        area += Check(row, col - 1, matrix, p, q);
    }
    if (row + 1 < p && matrix[row + 1][col] == 1)
    {
        area += Check(row + 1, col, matrix, p, q);
    }
    if (col + 1 < q && matrix[row][col + 1] == 1)
    {
        area += Check(row, col + 1, matrix, p, q);
    }
    return area;
}

void getValues(int **matrix, int p, int q)
{
    printf("Enter the elements: \n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] != 0 && matrix[i][j] != 1)
                matrix[i][j] = 0;
        }
    }
}

void display(int **matrix, int p, int q)
{
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int findArea(int **matrix, int p, int q)
{
    int area = 0;
    int max = 0;

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            if (matrix[i][j] == 1)
            {
                area = Check(i, j, matrix, p, q);
            }
            if (area > max)
                max = area;
        }
    }
    return max;
}

int main()
{
    int p, q;
    int **matrix = initialize(&p, &q);

    getValues(matrix, p, q);

    display(matrix, p, q);

    int area = findArea(matrix, p, q);

    printf("Max = %d", area);
    return 0;
}
