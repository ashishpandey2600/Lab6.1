#include<stdio.h>
int main()
{      //question: WAP to find greatest element in an array.
   int size,max=0,arr[100];
  printf("Enter the size of matrix\n");
  scanf("%d",&size);
  
  printf("Enter the elements\n");
  for(int i=0;i<size;i++)
  {
      scanf("%d",&arr[i]); //lopp for input and checks greatest number
      if(max<arr[i]){
          max=arr[i];
      }
  }
  printf("%d  greatest element enterd in array",max);

   
         
    return 0;

}