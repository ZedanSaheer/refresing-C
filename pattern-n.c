#include<stdio.h>
#include<conio.h>
void main(){
    int element=0,line,allot,range,digit,number[100];
    printf("please enter the number to form pattern : ");
    scanf("%d",&range);
    while(range>0){
        digit=range%10;
        range=range/10;
        number[element]=digit;
        element++;
    }
    for(line=element-1;line>=0;line--){
        for(allot=line;allot>=0;allot--){
            printf("%d",number[allot]);
        }
        printf("\n");
    }
    getch();
}
