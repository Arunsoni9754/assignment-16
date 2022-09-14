#include<stdio.h>
int main()
{
    int a[3][3],i,j,count=0,k=0;
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
        if(a[i][j]==0)
        {
            count++;
        }
    }
    }
        for(i=0;i<3;i++)
    { 
        for(j=0;j<3;j++)
        {
        if(a[i][j]!=0)
            {
            k++;
            }
        }
    }
        if(count>k)
        printf("The matrix is sparse matrix ");
        else
        printf("The matrix is not sparse matrix");    
} 
