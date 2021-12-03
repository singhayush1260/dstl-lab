#include <stdio.h>
#include <stdlib.h>
void print(int *, int);
void main()
{
    int size1, size2;
    printf("Enter the size of first set\n");
    scanf("%d", &size1);
    int *set1 = (int *)malloc(size1 * sizeof(int));
    printf("Enter the elements:\n");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &set1[i]);
    }
    printf("Enter the size of second set\n");
    scanf("%d", &size2);
    int *set2 = (int *)malloc(size2 * sizeof(int));
    printf("Enter the elements:\n");
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &set2[i]);
    }
    int intersection_size = 0;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (set1[i] == set2[j])
            {
                intersection_size++;
            }
        }
    }
    printf("SET A:\n");
    print(set1, size1);
    printf("SET B:\n");
    print(set2, size2);
    int *intersection_set = (int *)malloc(intersection_size * sizeof(int));
    int index = 0;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size1; j++)
        {
            if (set1[i] == set2[j])
            {
                intersection_set[index] = set1[i];
                index++;
            }
        }
    }
    printf("A UNION B:\n");
    print(intersection_set, intersection_size);
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