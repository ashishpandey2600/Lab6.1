#include<stdio.h>
#include<bootstrap.h>
int main()
{   //ques: WAP to check whether matrices are symmetric or not.
    int arr[100][100],b[100][100],rows,col;
    bool flag =1;
    printf("Enter the rows and columns of array\n");
    scanf("%d%d",&rows,&col);
    printf("Enter the elements of array\n");
    for(int i=0;i<rows;i++) // input of elements of array
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<col;i++)  //  transpose
    {
        for(int j=0;j<rows;j++)
        {
            b[i][j]=arr[j][i];
            
        }
    }
    for(int i=0;i<rows;i++)  // checking for A=A transpose
    {
        for(int j=0;j<col;j++)
        {
            if(b[i][j]!=arr[i][j]){
              flag =0;
              break;
            }   
        }
    }
    if(flag==0){
     printf("Not symmetric\n");
    }
    
    else
    {
        printf("matrix is symmetric");
    } 
    return 0;

}