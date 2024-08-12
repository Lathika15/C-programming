#include<stdio.h>
int main(){
int a,b,c;

scanf("%d %d %d",&a,&b,&c);
 
if(a>b && a>c ) {
    
printf("Largest Number : %d ",a);

}
else if(b>a && b>c ) {
    
printf("Largest Number : %d",b);

}
else if(c>a && c>b ) {
    
printf("Largest Number : %d ",c);

}
return 0;
}





