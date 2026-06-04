#include <stdio.h>
int main() {
int n,d,temp,s,start,end;

 printf("Enter start and end : ");
scanf("%d %d", &start,&end);

for(n=start;n<=end;n++){
temp=n;
s=0;
while(temp>0){
d=temp%10;
s=s+d*d*d;
temp=temp/10;}
 if (s==n){
     printf("Armstrong number-%d",n);}}
 

    return 0;
}