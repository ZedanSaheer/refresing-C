#include<stdio.h>
#include<conio.h>
void main(){
    int r=0,sum=0,n,m;
    printf("Enter a number : ");
    scanf("%d" , &n);
    while(n>0){
        m=n%10;
        sum=sum+m;
        r=(r*10)+m;
        n=n/10;
    }
    printf("\n the sum of the digits : %d", sum);
    printf("\n the reverse of digits : %d",r);
    getch();
}
