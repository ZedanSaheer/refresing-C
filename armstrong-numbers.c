#include<stdio.h>
#include<conio.h>

int armstrong(int);
int power(int,int);

void main(){
    int low,high,number;
    printf("enter the armstrong range of numbers (lower) : ");
    scanf("%d" , &low);
    printf("enter the armstrong range of numbers (higher) : ");
    scanf("%d" , &high);
    printf("the armstrong numbers between %d and %d : \t" , low , high);
    for(number=low;number<high;number++){
        if(armstrong(number)==1){
            printf("%d \t",number);
        }
    }
    getch();
}

int armstrong(int n){
    int reminder ,sum=0 , digits=0 , temp;
    temp=n;
    while(temp!=0){
        digits++;
        temp=temp/10;
    }
    temp=n;
    while(temp!=0){
        reminder = temp%10;
        sum = sum + power(reminder , digits);
        temp=temp/10;
    }
    if(sum==n){
        return 1;
    }else{
        return 0;
        }
}
int power(int n, int r){
    int i,p=1;
    for(i=0;i<r;i++){
        p=p*n;
    }
    return p;
}
