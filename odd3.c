#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    n=n*n;
    if(n%2==0){

        printf("even");
    }
    else if(n%2==1){
        printf("odd");
    }
    else{
        printf("any");
    }
    return 0;
}

