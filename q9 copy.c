#include<stdio.h>
int main()
{
    //ques:  WAP to read and write a 2-D array.
    int m,n,arr[100][100];
    printf("Enter the size of rows and columns m*n\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of array\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    //print
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
           printf("%5d",arr[i][j]);

        }
        printf("\n");
    }

  



    return 0;
}