#include<stdio.h>
int main()
{   //question : WAP to sort and merge two arrays and store it into third array.
    int s1,s2,s3,s4;
    printf("Enter the size of first array\n");
    scanf("%d",&s1);
    int as[s1];
    printf("Enter the elements of first array\n");
    for(int i=0;i<s1;i++) //input of first row elements
    {
        scanf("%d",&as[i]);
    }
     printf("Enter the size of second matrix\n");
     scanf("%d",&s2);
     int bs[s2];
     printf("Enter the elements of second array\n");
      for(int j=0;j<s2;j++)     //input of second array
      {
          scanf("%d",&bs[j]);
      }   
      //MERGING!!!
      s3=s1+s2;
      int cs[s3];
      for(int i=0;i<s1;i++) // Entering first matric in third array
      {

          cs[i]=as[i];
          
      }
      for(int i=s1,j=0;i<s3 && j<s2;i++,j++) //Enter the second row matrix element 
      {
          cs[i]=bs[j];
      }
      //sorting : SELECTION SORT
      
      for(int i=0; i<s3-1;i++)
      {

          for(int j=i+1;j<s3;j++)
          {
          if(cs[j]<cs[i])
          {
          int temp=cs[i];
          cs[i]=cs[j];
          cs[j]=temp;
          }
          }
          
      }
      
      //printing sorted array
      for(int i=0;i<s3;i++)
      {
          printf("%d\t ",cs[i]);
      }
      
       
    return 0;

}