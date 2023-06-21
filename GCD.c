//Programme to find the gcd of two number's 
#include<stdio.h>
int gcd(int,int);
int main(){
    int a,b,result;
    printf("Enter the a value :");
    scanf("%d",&a);
    printf("Enter the b value :");
    scanf("%d",&b);
    if(a>b){
         result = gcd(a,b);
    }else{
        result = gcd(b,a);
    }
    printf("The gcd of the %d and %d is %d",a,b,result);
}
int gcd(int a ,int b){
    int rem;
    rem = a%b;
    if(rem==0){
        return b;
    }
    else{
        return gcd(b,rem);
    }
}
