#include <stdio.h>
#include <stdlib.h>
void print(int *, int);
void setDiff(int *, int, int *, int);
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
    printf("A-B:\n");
    setDiff(set1, n1, set2, n2);
    printf("B-A:\n");
    setDiff(set2, n2, set1, n1);
    getch();
}
void setDiff(int *set1, int n1, int *set2, int n2)
{
    int *diff = (int *)malloc(n1 * sizeof(int));
    int diff_size = 0;
    int index = 0;
    for (int i = 0; i < n1; i++)
    {
        int c = 0;
        for (int j = 0; j < n2; j++)
        {
            if (set1[i] == set2[j])
            {
                c = 1;
                break;
            }
        }
        if (c == 0)
        {
            diff[index] = set1[i];
            index++;
            diff_size++;
        }
    }
    print(diff, diff_size);
}
void print(int *ar, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");
}