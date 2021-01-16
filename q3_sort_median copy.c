#include<stdio.h>
int main()
{           //question : WAP to sort an array and then find median.

   
  int  size,temp,num1,num2,num3,k,p,count=0,middle,l,first;
  float sec;
   printf("Enter the Size of array\n");
   scanf("%d",&size);k=(size)/2;
   l=k-1;

   int arr[size];
   printf("Enter the Elements of array\n");
   for(int i=0;i<size;i++) //loop for input array
   {
       scanf("%d",&arr[i]);

   }
   for(int j=0;j<size-1;j++)//pursuing "SELECTION SORT" in acending order
   {
       for(int i=j+1;i<size;i++)
       {
           if(arr[i]<arr[j]){
           temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;}
       }
   }
   if(size%2!=0){
   for(int i=0;i<size;i++) // loop for taking add middle term
   {
       
       if(i==k)
       {
           printf("%d is median",arr[i]);  //expressioin for odd
           break;
       }

     
   }
   }
   else{
   for(int i=0;i<size;i++){

       if(i==l)                 //expression for even 
       first=arr[i];
       if(i==k){
       sec=first+arr[i];
       printf("%f is median ",sec/2);  
       break;}


   }
   }
   
  
        

         
    return 0;
}