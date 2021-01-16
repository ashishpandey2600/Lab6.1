#include<stdio.h>
int main()
{ 
     //question : WAP to read an array and insert 0 between every
     //           two elements of the array.
    int arr[100],n;
    printf("Enter the number of element entered by user\t");
    scanf("%d",&n);
    for(int i=0;i<n+n-1;i++) //loop for input and  placing zero in between as ques
    {
        if(i%2!=0)
        arr[i]=0;
        if(i%2==0)
        scanf("%d",&arr[i]);

    }
    for(int i=0;i<n+n-1;i++) // loop for printing
    {
        printf("%d\t",arr[i]);
    } 
    return 0;

}