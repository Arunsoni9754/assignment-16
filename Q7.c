#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("Enter one array");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    { 
        for(j=0;j<3;j++)
        {
            if(i>=j)
        a[i][j]=0;
        }
    }
     for(i=0;i<3;i++)
    { 
        for(j=0;j<3;j++)
        {
        printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    }
