#include<stdio.h>
#include<conio.h>

void main(){
    FILE *fpOdd, *fpEven;
    int num;
    fpOdd = fopen("odd.txt","w");
    fpEven = fopen("even.txt","w");
    printf("enter the number one by one \n press 0 to exit \n let's go : ");
    while(1){
        scanf("%d",&num);
        if(num==0){
            break;
        }
        if(num%2==0){
            fprintf(fpEven,"%d \n",num);
        }else{
            fprintf(fpOdd,"%d \n",num);
        }
    }
    fclose(fpEven);
    fclose(fpOdd);
    printf("\n files written successfully");
    getch();
}
