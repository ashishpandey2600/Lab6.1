#include<stdio.h>
int main()
{    ////////work on progress

    int arr[100][100],store1,store2,count=0,row,col,a,b,sum=0;
    printf("Entr the rows and columns of matrix\n");
    scanf("%d%d",&row,&col);
    printf("Ente the elements of matrix\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);

        }
    }
    if(row && col == 2)
    {
        store1=arr[0][0]*arr[1][1]-arr[0][1]*arr[1][0];
         printf(" determinant  = %d \n",store1);
    }
    else
    {
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                
                b=arr[0][j];
                if(i==0 && j==1)
                a=-1*b*(arr[i+2][j+1]*arr[i+1][j-1]-arr[i+1][j+1]*arr[i+2][j-1]);

                if(i!=0)
                a=b*(arr[i][j]*arr[i+1][j+2]-arr[i][j+1]*arr[i+1][j]);
                if(i==1 && j==1)//2
                a=-1*b*(arr[i+1][j]*arr[i][j]-arr[i][j]*arr[i+1][j-0]);
                
    
                
                sum+=a;
     
             
            }
        }
        printf("%d is determinant \n",sum);








    }
    
       
    return 0;
}