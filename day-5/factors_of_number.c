#include<stdio.h>
int main(){
int n,s;

printf("Enter the number");
scanf("%d",&n);

for(int i=1;i<=n;i++){

s= n% i;
if(s==0){printf(" %d",i);}
}

return 0;
}