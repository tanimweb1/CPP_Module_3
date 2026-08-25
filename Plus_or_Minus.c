#include<stdio.h>
int main(){
int T;
scanf("%d",&T);

    while(T--){

int a,b,c,sum,sub;
scanf("%d%d%d",&a,&b,&c);

sum = a+b;
sub  = a-b;

if(sum==c){
    printf("+\n");
}
else if(sub ==c){
    printf("-\n");
}








    }
return 0;
}