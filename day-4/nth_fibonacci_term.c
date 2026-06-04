#include<stdio.h>
int main(){
int n,f=0,s=1,t;

printf("Enter n-");
scanf("%d",&n);

if(n==1){
    printf("nth fibonacci terms is-%d",f);
}
else if(n==2){
    printf("nth fibonacci term is -%d",s);

}
else{
    for(int i=3;i<=n;i++){
        t=f+s;
        f=s;
        s=t;
    }
    printf("nth fibonacci term- %d",s);

}

return 0;
}