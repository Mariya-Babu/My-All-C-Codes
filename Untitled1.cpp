#include<iostream>
using namespace std;
int factorial(int);
float* nabla(float y[],float diff[]){
	float nabla1[4];
	float nabla2[3];
	float nabla3[2];
	float nabla4[1];
	for(int i=0;i<4;i++){
		nabla1[i] = y[i+1]-y[i];
	}
	for(int i=0;i<3;i++){
		nabla2[i] = nabla1[i+1]-nabla1[i];
	}
	for(int i=0;i<2;i++){
		nabla3[i] = nabla2[i+1]-nabla2[i];
	}
	for(int i=0;i<1;i++){
		nabla4[i] = nabla3[i+1]-nabla1[i];
	}
	diff[0]=nabla1[3];
	diff[1]=nabla2[2];
	diff[2]=nabla3[1];
	diff[3]=nabla4[0];
	cout<<diff[1]<<endl;
	//{nabla1[3],nabla2[2],nabla3[1],nabla4[0]};
	return diff;
}
float newtonbackward(float x[],float y[],int n){
	int fact;
	float p;
	float mul=1;
	float sum=y[4];
	float diff[4];
	//float* ptr = nabla(y,diff);
	cout<<sum;
	nabla(y,diff);
	p=(float)(n-x[4])/(x[1]-x[0]);
	//cout<<p;
	for(int i=0;i<4;i++){
		fact = factorial(i+1);
		mul=mul*(p+i);
		sum += diff[i] * (float)(mul/fact);
	}
	return sum;
}
int main(){
	float x[5];
	float y[5];
	cout<<"Enter x values: ";
	for(int i=0;i<5;i++){
		cin>>x[i];
	}
	cout<<"Enter y values: ";
	for(int i=0;i<5;i++){
		cin>>y[i];
	}
	float o = newtonbackward(x,y,1955);
	cout<<o<<endl;
	return 0;
}

int factorial(int n){
	if(n==0){
		return 1;
	}
	else{
		return n*factorial(n-1);
	}
}
