#include<stdio.h>
int main()
{
    /*
    14. Write a program to input two matrices from the user. 
    Perform the following functions on the matrices:
    a) Addition.
    b) Subtraction.
    c) Multiplication.
    Make the program menu driven with appropriate error handling.*/
    char ch;
    int a[100][100],b[100][100],c[100][100],row,col,row1,col1;
    printf("Enter the operation +,-,*\n");
    scanf("%c",&ch);
    printf("Enter the rows and columns of first matrix\n");
    scanf("%d%d",&row,&col);
     printf("Enter the rows and columns of second matrix\n");
    scanf("%d%d",&row1,&col1);
    printf("Enter the elements in first matrix\n");
      if(col==row1)
      {
          
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the matrix in second array");
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col1;j++)
        {
            if(ch=='+')
            {
                if(row==row1 && col==col1)
                c[i][j]=a[i][j]+b[i][j];
                else 
                printf("Cannot posible\n");
                break;
            }
            else if(ch=='-')
            {
                 if(row==row1 && col==col1)
                c[i][j]=a[i][j]-b[i][j];
                else 
                printf("Cannot posible\n");
                break;
            }
            else if(ch=='*')
            {
                for(int k=0;k<col;k++)
                {
                    c[i][j]+=a[i][k]+b[k][i];
                }
            }
            else
            {
                printf("Wrong choise, try again ");
                break;
            }
            
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        printf("%d  ",c[i][j]);
        printf("\n");
    }
      }
      else
      {
          printf("%c not possible \n",ch);
      
      }
    return 0;

}