#include <stdio.h>
int main() {
int n,d,temp,s=0;

 printf("Enter a number: ");
scanf("%d", &n);
temp=n;
while(n>0){
d=n%10;
s=s+d*d*d;
n=n/10;}
 if (s==temp)
     printf("Armstrong number");
 else
     printf("Not an Armstrong number");

    return 0;
}