/* C Programme to impliment the p->q in discreate maths */
#include<stdio.h>
#include<stdlib.h>
int main(){
	// Inputs as (i)a=2,b=3 (ii)a=8,b=5 (iii)a=12,b=2 
	int a,b,c,d;
	printf("Input the value of a :");
	scanf("%d",&a);
	printf("Input the value of b :");
	scanf("%d",&b);
	if(((a!=b)&&(a+b<=2))&&(a==b)||((2*a*b+a/b)<12)){
		c = a+b*2-a-b;
		printf("c");
	}
	else if((a>b)&&((a*b)%4==5)||(2*a*b+a-b)>=3){
		d = 2*a+b*2-a/b;
		printf("%d",d);
	}
	else if((b>a)||(-a+b*4*a*b-a/b)/2>a+b){
		printf("Mathematics is Easy \n");
	}
	else{
		printf("Discreate Mathematics is Easy \n");
	}
	return 0;
}
