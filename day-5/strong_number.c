#include<stdio.h>
int main(){
int n,temp,r,fact,sum=0 ;

printf("Enter the number");
scanf("%d",&n);
 
temp=n;
while(temp>0){
r=temp%10;
fact =1;

for(int i=1;i<=r;i++){

    fact=fact*i;
}
sum=sum + fact;
temp=temp/10;
}
  if (sum == n)
        printf("%d is a Strong Number\n", n);
    else
        printf("%d is not a Strong Number\n", n);

return 0;
}