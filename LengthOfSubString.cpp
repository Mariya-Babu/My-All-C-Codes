#include<stdio.h>
int lengthOfLongestSubstring(char * s){
    int count = 0;
    char str[50];
    for(int i=0;s[i]!=NULL;i++){
        int flag = 0;
        for(int j = i+1;s[j]!=NULL;j++){
            if(s[i]==s[j]){
                flag++;
                break;
            }
        }
        if(flag==0){
            str[count] = s[i];
            count++;
        }
    }
    printf("\n%s",str);
    printf("%d",count);
    return count;
}
int main(){
	char str[50];
	printf("Enter a string : ");
	gets(str);
	lengthOfLongestSubstring(str);
}
