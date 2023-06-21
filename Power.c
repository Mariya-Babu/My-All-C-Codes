//Programme to find the power of two numbers without using the power functio

#include<stdio.h>
int pow(int,int);
int main(){
    int a,b,i,result;
    printf("Enter the a value: ");
    scanf("%d",&a);
    printf("Enter the b value :");
    scanf("%d",&b);
    result = pow(a,b);
    printf("The %d power  %d is %d",a,b,result);
}
int pow(int a ,int b){
    if(b>0){
        a = a * pow(a,b-1);
        return a;
    }
    else{
        return 1;
    }
}
