#include<stdio.h>
#include<conio.h>

void main(){
    int a,c,i=0,j,num[10];
    printf("enter a number in base of 10 (decimal) : ");
    scanf("%d",&a);
    printf("your binary converted number is \t");
    do{
        c=a%2;
        num[i]=c;
        i++;
        a=a/2;
    }while(a!=0);
    for(j=i;j>=0;j--){
        printf("%d \t", num[j]);
    }
    getch();
}
