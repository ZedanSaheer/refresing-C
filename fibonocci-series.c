#include<stdio.h>
#include<conio.h>
void main(){
    int a=0,b=1,range,c;
    printf("enter the range of the fibonocci series : ");
    scanf("%d" , &range);
    printf("the fibonocci series is : \t");
    while(a<=range){
        printf("%d \t",a);
        c=a+b;
        a=b;
        b=c;
    }
    getch();
}
