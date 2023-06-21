//Programme to find the gcd of two number's 
/*
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
 
//Programme to find the given number is polindrome or not
#include<stdio.h>
int rev(int);
int main(){
    int n,revers;
    printf("Enter the n value to check the number is polindrome or not :");
    scanf("%d",&n);
    revers = rev(n);
    if(revers==n){
        printf("The given number is polindrome!");
    }
    else{
        printf("the given number is not polindrome");
    }
}
int rev(int n){
    static int rem = 0 ;
    if(n>0){
        rem = rem * 10 + n%10;
        return rev(n/10);
    }
    else{
        return rem;
    }
}
*/
// Programme for multiplication  without using the division operator
#include<stdio.h>
#include<math.h>
int mult(int,int);
int main(){
    int a,b,i,result;
    printf("Enter the a value: ");
    scanf("%d",&a);
    printf("Enter the b value :");
    scanf("%d",&b);
    result = mult(a,b);
    printf("The multiplaction of the %d and %d is %d",a,b,result);
}
int mult(int a,int b){
    if(b>0){
       a = a + mult(a,b-1);
       return a;
    }
    else{
        return 0;
    }
}
