// Programme for division without using the division operator

#include<stdio.h>
#include<math.h>
int div(int,int);
int main(){
    int a,b,i,result;
    printf("Enter the a value: ");
    scanf("%d",&a);
    printf("Enter the b value :");
    scanf("%d",&b);
    result = div(a,b);
    printf("The division of the %d and %d is %d",a,b,result);
}
int div(int a,int b){
    int ;
    if(a>=b){
        return 1 + div(a-b,b);
    }
    else{
        return 0;
    }
}
