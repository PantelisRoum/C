#include<stdio.h>
#define SIZE 10
 int main ()
 {
     int i,j,num,found,arr[SIZE];
     while(i<SIZE)
     {
         printf("Enter numbers:");
         scanf("%d",&num);
         found=0;
         for (j=0;j<i;j++)
         {
             if (arr[j]=num){
                 
             
             printf(" error the numbers is %d is excist: ",num);
             found=1;
             
            }
            break ;
         }
         if(found==0){
             arr[i]=num;
             i++;
             
         }
      
       }
     printf("arrey elements is :");
     for(i=0;i<SIZE;i++)
     {
         printf("%d",arr[i]);
        
     }
      return 0;
 }


