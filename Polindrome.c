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
