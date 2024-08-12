#include<stdio.h>
int main(){
    int num,a,b,c;
    c=1;
    scanf("%d",&a);
    scanf("%d",&b);
    for(int i=0;i<=b;i++)
       num=a*(i+i);
    printf("%d",num);
    
return 0;
}

