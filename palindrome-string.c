#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
    int c=0,i,n;
    char s[1000];
    printf("enter the word to check palindrome : ");
    gets(s);
    n=strlen(s);
    for(i=0;i<n/2;i++){
        if(s[i]==s[n-i-1]){
            c++;
        }
    }
    if(c==i){
        printf("the word is palindrome");
    }else{
        printf("the word is not palidrome");
    }
}
