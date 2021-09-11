#include<stdio.h>
#include<conio.h>
void main(){
    int n,i=2,flag=0;
    printf("please enter a number : ");
    scanf("%d",&n);
    for(i;i<n/2;i++){
    if(n%i==0){
        flag=1;
        break;
        }
    }
    if(n==1){
        printf("1 is neither prime nor composite");
    }else {
            if(flag==1){
            printf("\n %d is not a prime number",n);
        }
        else if(flag==0){
            printf("\n %d is a prime number",n);
        }
    }
  getch();
}
