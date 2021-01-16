#include<stdio.h>
int main()
{              //SELECTION SORT
               //WAP to sort an array.
             
    int size;
    
    printf("Enter the size of array\n");
    scanf("%d",&size);
     int arr[size];
    for(int i=0;i<size;i++)//for input of elements in array
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the elements in array");
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++) { //loop for sorting in acending order
        if(arr[j]<arr[i]){    // if u want to do it in asecding order replace "<" by ">"
        int temp=arr[j];       //using the third variable to swap array elemnt 
        arr[j]=arr[i];
        arr[i]=temp;
        }
        }
    }
    for(int i=0;i<size;i++){        //loop for printing of sorted array
        printf("%d\t",arr[i]);
    }

    return 0;

}