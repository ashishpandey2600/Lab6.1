#include<stdio.h>
int main()
{   // ques : WAP to read an array and store it. Now change the array by putting 
    //        the resultant of subtraction of two elements between them.

    int arr[100],a,b,n;
    printf("Enter the number of elements user want to enter\n");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for(int i=0;i<n+n-1;i++)          //loop for input and at even places puting arr[i]=0,so i can make space
    {  
        if(i%2!=0)
        {
            arr[i]=0;
        }
        else
        scanf("%d",&arr[i]);
       
    }

    for(int i=0;i<n+n-1;i++)  // at even places know putting even_place=privious_element - next elemnet
    {
        if(i%2!=0)
        {
          arr[i]=arr[i-1]-arr[i+1]; //process of subracting next element by previous element
        }
        printf("%d\t",arr[i]);
    }


    return 0;
}
