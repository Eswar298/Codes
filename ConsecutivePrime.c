Some prime numbers can be expressed as Sum of other consecutive prime numbers.
For example

5 = 2 + 3
17 = 2 + 3 + 5 + 7
41 = 2 + 3 + 5 + 7 + 11 + 13

#include <stdio.h>
int prime(int b)
{
    int j,cnt;
   cnt=1;
     for(j=2;j<=b/2;j++)
     {
         if(b%j==0)
         cnt=0;
     }
     if(cnt==0)
     return 1;
     else
     return 0;
}
int main() {
 int i,j,n,cnt,a[25],c,sum=0,count=0,k=0;
 scanf("%d",&n);
 for(i=2;i<=n;i++)
 {
     cnt=1;
     for(j=2;j<=n/2;j++)
     {
         if(i%j==0)
         cnt=0;
     }
     if(cnt==1)
     {
        a[k]=i;
        k++;
        printf(" i is%d   ",i);
        }
 }
 for(i=0;i<k;i++)
 {
     printf("a[i] is  %d   ",a[i]);
 }
 for(i=0;i<k;i++)
 {
     sum=sum+a[i];
    c= prime(sum);
   
    if(c==1)
    {
         printf("sum is  %d",sum);
       printf("yes");
       count++;
    }
 }
 printf("%d",count);
 return 0;
}
