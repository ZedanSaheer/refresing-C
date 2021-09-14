#include<stdio.h>
#include<conio.h>

void main(){
    int matrix[10][10],i,j,m;
    printf("enter the number of rows and colomns : ");
    scanf("%d",&m);

    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            if(i==j)
                {
                    matrix[i][j]=0;
            }
             else if(i>j)
                {
                    matrix[i][j]=-1;
             }
              else if(i<j)
                {
                    matrix[i][j]=1;
              }
        }
    }
        printf("the array for given matrix is : \n");
     for(i=0;i<m;++i){
        for(j=0;j<m;++j){
                printf("\t %d",matrix[i][j]);
            }
            printf("\n");
        }
    getch();
}
