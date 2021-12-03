#include <stdio.h>
#include <stdlib.h>
void print(int *, int);
void main()
{
    int n1, n2;
    printf("Enter the size of set A:\n");
    scanf("%d", &n1);
    int *set1 = (int *)malloc(n1 * sizeof(int));
    printf("Enter the elements:\n");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &set1[i]);
    }
    printf("Enter the size of set B:\n");
    scanf("%d", &n2);
    int *set2 = (int *)malloc(n2 * sizeof(int));
    printf("Enter the elements:\n");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &set2[i]);
    }
    printf("SET A:\n");
    print(set1, n1);
    printf("SET B:\n");
    print(set2, n2);
    printf("Cartesian Product of Set A and Set B:\n");
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("{%d,%d} ", set1[i], set2[j]);
        }
    }
    getch();
}
void print(int *ar, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");
}