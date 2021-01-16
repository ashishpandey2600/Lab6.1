#include<stdio.h>
int main()       

{
    /* question 13. Write a program to input a square matrix M1 and create another
     matrix M2 with same dimensions and such that the addition of every row of M1 
     is stored in the corresponding diagonal element of M2.
        i.e., the addition of row 0 of M1 will be stored in the element M2(0, 0), addition of
        row 1 of M1 will be stored in the element M2(1,1) and so on. Make the other elements
        of M2 zero.*/


    int arr[100][100],b[100][100],row,col,a=0,p=0,c=0,store;
    printf("Enter the rows and columns of matrix\n");
    scanf("%d%d",&row,&col);
    printf("Enter the elements of array\n");
    for(int i=0;i<row;i++) //loop for input of array
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
           
        }

    }
   //
    for(int i=0;i<row;i++) // adding rows and subtuting an it in diagonals
    {
        for(int j=0;j<col;j++)
        {
            if(i==j){
           for(int k=0;k<row;k++)
           {
              
               store+=arr[k][j];
           }}
            b[i][j]=arr[i][j];
            if(i==j)
            {
              b[i][j]=store;
              store=0;
              
            }
            
            
        }
    }
    for(int i=0;i<row;i++) //loop for printing  modified matrix
    {
        for(int j=0;j<col;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }


         
    return 0;

}