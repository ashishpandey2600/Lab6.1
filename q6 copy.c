#include<stdio.h>
int main()
    //question : WAP to read an array then change the array such that its nth
    //            value contains the sum of previous n-1 elements.
{
    int size,count=0,k;
    printf("Enter the size of array\t");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the  elements of array\n");
    for(int i=0;i<size;i++)   //for loop for input and adding the values
    {
        scanf("%d",&arr[i]);
        count+=arr[i];
        
    }
     k=count;
    for(int i=0;i<=size;i++) //loop for making one etc space for count by i<=size
    {
       if(i==size)
       arr[i]=k;

       printf("%d\t",arr[i]);
        
    }

   
         
    return 0;
}