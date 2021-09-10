#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char str[100];
    int i,totalwords=1;
    printf("enter any amount of string : ");
    gets(str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' '||str[i]=='\n'||str[i]=='\t'){
            totalwords++;
        }
    }
    printf("\n the total number of words typed in the sentence %s = %d" , str,totalwords);
    getch();
}
