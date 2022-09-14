#include<stdio.h>
int main()
{
    int a[3][3],i,j,s;
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
    { s=0;
        for(j=0;j<3;j++)
        {
        s=s+a[i][j];
        }
        printf("The sum of %d row is %d\n",i,s);
    }for(i=0;i<3;i++)
    { s=0;
        for(j=0;j<3;j++)
        {
        s=s+a[j][i];
        }
        printf("The sum of %d cloums is %d\n",i,s);
    }
    }
