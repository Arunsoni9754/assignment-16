#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j,c[3][3];
    printf("Enter one array");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter another array ");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    { int s=0;
        for(j=0;j<3;j++)
        {
            s=s+a[i][j]*b[j][i];
            c[i][j]=s;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }


}
