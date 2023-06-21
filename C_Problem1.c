
#include<stdio.h>
#include<conio.h>
int main(){
    char w ='w';
    char a ='a';
    char name[50];
    char gender;
    int age,i;
    printf("Enter your name :");
    scanf("%s",name);
    getchar();
    printf("\nEnter your gender f=femal m=male :");
    scanf("%c",&gender);
    printf("\nEnter your age :");
    scanf("%d",&age);
    while(1){
    printf("\nEnter which seat you want :");
    scanf("%d",&i);
        if( i>=1 && i<=38 ){
          if(((i+2)%4==0||(i+3)%4==0) && i!=37){
             printf("you got the window seat");
             break;
         }
         else{
             printf("you got the Aisel seat");
             break;
             }
        }
        else{
            printf("seat number is out of range enter between 1 and 38");
        }
        
    }
    FILE *fo;
    fo = fopen("BussDetails.csv","a")
    
    
}