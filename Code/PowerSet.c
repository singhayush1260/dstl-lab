#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
void main()
{
    int cardinal_num;
    printf("Enter the size of first set");
    scanf("%d", &cardinal_num);
    int *set = (int *)malloc(cardinal_num * sizeof(int));
    printf("Enter the elements:\n");
    for (int i = 0; i < cardinal_num; i++)
    {
        scanf("%d", &set[i]);
    }
    int pow_cardinal_num = pow(2, cardinal_num);
    printf("Phi\n");
    for (int i = 0; i < pow_cardinal_num; i++)
    {
        for (int j = 0; j < cardinal_num; j++)
        {
            if (i & (1 << j))
                printf("%d", set[j]);
        }
        printf("\n");
    }
    getch();
}