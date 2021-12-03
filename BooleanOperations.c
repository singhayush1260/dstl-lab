#include<stdio.h>
#include<conio.h>
void boolean_and();
void boolean_or();
void boolean_not();
void main()
{
  boolean_and();
  boolean_or();
  boolean_not();
}
void boolean_and()
{
    printf("\nA\tB\tA&&B\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d\t%d\t%d\n",i,j,i&&j);
        }
    }
}
void boolean_or()
{
    printf("\nA\tB\tA||B\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d\t%d\t%d\n",i,j,i||j);
        }
    }
}
void boolean_not()
{
    printf("\nA\t~A\n");
    for(int i=0;i<2;i++)
    {
     printf("%d\t%d\n",i,~i);    
    }
}