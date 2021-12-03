#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
void print(int*,int);
void main()
{
    int n1,n2;
    printf("Enter the size of first set\n");
    scanf("%d",&n1);
    int* set1=(int*)malloc(n1*sizeof(int));
    printf("Enter the elements:\n");
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&set1[i]);
    }
    printf("Enter the size of second set\n");
    scanf("%d",&n2);
    int* set2=(int*)malloc(n2*sizeof(int));
    printf("Enter the elements:\n");
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&set2[i]);
    }
    int temp;
    if(n1>n2)
    {
        temp=n1;
    }
    else
    {
        temp=n2;
    }
    int union_size=0;
    int* union_set=(int*)malloc(temp*sizeof(int));
    for(int i=0;i<n1;i++)
    {
        int c=0;
        for(int j=0;j<union_size;j++)
        {
           if(union_set[j]==set1[i])
           {
               c++;
               break;
           }
        }
        if(c==0)
        {
         union_set[union_size]=set1[i];
         union_size++;
        }
    }

    for(int i=0;i<n2;i++)
    {
        int c=0;
        for(int j=0;j<union_size;j++)
        {
           if(union_set[j]==set2[i])
           {
               c++;
               break;
           }
        }
        if(c==0)
        {
         union_set[union_size]=set2[i];
         union_size++;
        }
    }
    printf("SET A:\n");
    print(set1,n1);
    printf("SET B:\n");
    print(set2,n2);
    printf("A Union B:\n");
    print(union_set,union_size);
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