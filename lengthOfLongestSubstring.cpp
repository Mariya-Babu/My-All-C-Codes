#include<stdio.h>
int check(char *e,int l){
    for(int i=0;i<l-1;i++){
        for(int j=i+1;j<l;j++){
            if(e[i]==e[j]){
                return 0;
            }
        }
    }
    return 1;
}

int lengthOfLongestSubstring(char *s){
    int l=0,ch=0,n=0;
    for(int i=0;s[i]!='\0';i++){
           n++;
    }
    char str[n+1];
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            l = 0;
            ch =0;
            for(int k=j;k<(n-i)+j;k++){
                str[l++] = s[k];
            }
            ch=check(str,l);
            if(ch==1){
            	printf("%d ",l);
                return l;
            }
        }
    }
    return l;
}
int main(){
	char str[50];
	printf("Enter a string to find the longest substrig : ");
	gets(str);
	lengthOfLongestSubstring(str);
	
}
