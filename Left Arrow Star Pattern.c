#include<stdio.h>
int main()
{
    int i,j,l;
    for(i=1;i<=5;i++)
    {
        for(l=1;l<=5-i;l++)
        {
            printf(" ");
        }
      for(j=5;j>=i;j--)
      {
        printf("*");
    }
    printf("\n");
    }
    for(i=2;i<=5;i++)
    {
        for(l=1;l<=i-1;l++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}



