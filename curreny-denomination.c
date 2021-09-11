#include<stdio.h>
#include<conio.h>
#define SIZE 8
void main(){
    int i,amount,notes;
    int denominations[SIZE]={500,200,100,50,20,10,5,1};
    printf("enter the amount : ");
    scanf("%d" , &amount);
    printf("\n");

    for(i=0;i<SIZE;i++){
        notes = amount/denominations[i];
        if(notes){
            amount = amount % denominations[i];
            printf("\n%d x %d = %d", notes , denominations[i],(notes*denominations[i]));
        }
    }
    getch();
}
