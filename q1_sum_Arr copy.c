#include<stdio.h>
int main()
{       //question : WAP to find sum of all the elements in an array.

    int n,sum=0;
    printf("Enter the size of array  \n");
    scanf("%d",&n);    // Input for size of 1d matrix
    int arr[n];
    printf("Enter the elements of array\n");
    for(int i=0;i<n;i++)    // loop for input of element of 1d matrix 
    {
      scanf("%d",&arr[i]);
      sum+=arr[i];   //count : storing sum 
    }
    
    printf("Elements Enter by you\n");
    for(int j=0;j<n;j++)           //loop for output for matrix
    {
        printf("%d\t",arr[j]);
    }
    printf("\n sum of element =  %d",sum);
    return 0;
}