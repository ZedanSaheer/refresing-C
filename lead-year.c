#include<stdio.h>
#include<conio.h>

void main(){
    int year;
    printf("enter the year to check if it is a leap year : ");
    scanf("%d",&year);
    if(year%4==0 && year%100!=0){
        printf("%d is a leap year!",year);
    }else{
        printf("%d is not a leap year!",year);
    }
    getch();
}
