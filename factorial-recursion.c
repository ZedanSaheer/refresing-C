#include<stdio.h>
#include<conio.h>

int fact(int);

void main(){
    int x,number;
    printf("enter a number : ");
    scanf("%d", &number);
    x=fact(number);
    printf("factorial of %d is %d" , number , x);
    getch();
}

int fact(int n){
    if(n==0){
        return 1;
    }
    return (n*fact(n-1));
}
