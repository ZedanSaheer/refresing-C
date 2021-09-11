#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char words[100],letter;
    int i,len;
    printf("enter the words to get initials : ");
    gets(words);
    len=strlen(words);
    printf("%c",words[0]);
    for(i=0;i<len;i++){
        if(words[i]==' '||words[i]=='\n'||words[i]=='\t'){
            printf("%c",words[i+1]);
        }
    }
}
