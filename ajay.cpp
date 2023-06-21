//Composite number's
#include<stdio.h>
int composite(int,int);
int main(){
	int a,b;
	printf("Enter a value :");
	scanf("%d",&a);
	printf("Enter b value :");
	scanf("%d",&b);
	printf("a = %d b = %d\n",a,b);
	composite(a,b);
}
int composite(int a,int b){
	int m;
	for(int i=a;i<=b;i++){
		m =0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				m++;
			}
		}
		if(m>2){
			printf("%d\t",i);
		}
	}
}
