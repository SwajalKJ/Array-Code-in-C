/*
Q15: WAP to Solving linear equations
a1x+b1y=c1; a2x+b2y=c2
a1x+b1y+c1z=d1; a2x+b2y+c2z=d2; a3x+b3y+c3z=d3
*/

#include <stdio.h>
#include <stdlib.h>
int **replace(int **a, int *D, int k, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (j == k)
            {
                a[i][j] = D[i];
            }
        }
    }
    return a;
}

int determinant(int **a, int size)
{
    if (size == 2)
    {
        int det = (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);
        // printf("Determinant = %d\n",det);
        return det;
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 3; j < (size + 2); j++)
        {
            a[i][j] = a[i][j - 3];
        }
    }

    // printing matrix
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < (size + 2); j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // for diagonal sum
    int j = 0;
    int s = 0, sum = 1, total_sum = 0;
    for (int i = 0; i < size; i++)
    {
        int k = 0;
        j = s;
        s++;
        for (; j <= (size + 2); j++)
        {
            if (k == 3)
            {
                k--;
                break;
            }
            sum *= a[k][j];
            k++;
        }
        if (k == 2)
        {
            total_sum += sum;
            sum = 1;
        }
    }
    // printf("%d",total_sum);

    // diagonal sum reverse
    int min = 1, count = 0, total_min = 0;
    j = 0;
    s = 0;
    for (int i = size - 1; i >= 0; i--)
    {
        int k = s;
        j = 0;
        s++;
        for (; j < size; j++)
        {
            min *= a[i][k];
            k++;
            i--;
        }
        if (i == (-1))
        {
            total_min += min;
            min = 1;
            i = size;
            count++;
        }
        if (count == 3)
        {
            break;
        }
    }
    // printf("total_min = %d/n",total_min);
    printf("Determinant = %d\n", total_sum - total_min);

    return total_sum - total_min;
}
int **create_array(int size)
{
    int **a;
    a = (int **)malloc(size * sizeof(int *));
    if (size == 2)
    {
        for (int i = 0; i < size; i++)
        {
            a[i] = (int *)malloc(size * sizeof(int));
        }
    }
    else
    {
        for (int i = 0; i < (size + 2); i++)
        {
            a[i] = (int *)malloc((size + 2) * sizeof(int));
        }
    }
    return a;
}

int main()
{
    int size = 0, in = 0;
    int **a;
    printf("enter dimension of matrix = ");
    scanf("%d", &size);

    a = create_array(size);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &in);
            a[i][j] = in;
        }
    }
    int *D;
    D = (int *)malloc(size * sizeof(int));

    for (int j = 0; j < size; j++)
    {
        printf("a[%d] = ", j);
        scanf("%d", &in);
        D[j] = in;
    }

    // calculating determinant of Dx
    //
    int **b = create_array(size);
    int **c = create_array(size);
    ;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            b[i][j] = a[i][j];
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            c[i][j] = a[i][j];
        }
    }

    int d0 = determinant(a, size);
    int **Dx = replace(a, D, 0, size);
    int d1 = determinant(Dx, size);
    int **Dy = replace(b, D, 1, size);
    int d2 = determinant(Dy, size);
    int **Dz = replace(c, D, 2, size);
    int d3 = determinant(Dz, size);
    printf("x= %d\n", (int)(d1 / d0));
    printf("y= %d\n", (int)(d2 / d0));
    printf("z= %d\n", (int)(d3 / d0));

    return 0;
}
