#include<stdio.h>
int sum(int n);
int main(){
int n,c;

printf("Enter the number");
scanf("%d",&n);

c=sum(n);

printf("The sum of digit is=%d",&c);

return 0;

}

int sum (int n)
{
  if(n==0) return 0;

   return (n%10)+sum(n/10); 
}