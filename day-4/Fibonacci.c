#include<stdio.h>
int main(){
int n,f,s,t,i;
printf("Enter the number of terms");
scanf("%d",&n);
//f-first term
//s-second term
//t-next term
f=0;
s=1;
printf("%d %d",f,s);
for(i=0;i<n-2;i++){
t=f+s;
printf("%d",t);
f=s;
s=t;}
printf("\n");
return 0;

}