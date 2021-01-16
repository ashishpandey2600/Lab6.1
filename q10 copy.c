#include<stdio.h>
int main()
{
    //ques: WAP to transpose a matrix.
    int arr[100][100],brr[100][100],m,n;
    printf("Enter the rows and columns\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of  array\n");
    for(int i=0;i<m;i++) // for scanf ... input
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++)  // for tranposing
    {
        for(int j=0;j<m;j++)                           
                                                    
        {
            brr[i][j]=arr[j][i];

        }
    }
    for(int i=0;i<n;i++) //<--column jo pehle row thi
    {
        for(int j=0;j<m;j++)  //<--row jo pehle column thi
        {
            printf("%5d  ",brr[i][j]);
        }
        printf("\n");
    }

         
    return 0;

}