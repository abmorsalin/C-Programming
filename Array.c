         (Print all the integers into reverse number)
#include<stdio.h>
int main(){
int i,n;
   printf("Enter Your Array Index Number: ");
   scanf("%d",&n);
   int arr[n];

   for(i=0;i<n;i++)
    {
   printf("inter your array index value: ");
   scanf("%d",&arr[i]);
   }
      for(i= n-1;i>=0;i--)
    {
   printf("Your array index value:%d \n",arr[i]);

   }

return 0;
}
