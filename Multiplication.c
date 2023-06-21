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

