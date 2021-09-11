#include<stdio.h>
#include<conio.h>
void main(){
    int matrix[10][10],transpose[10][10],row,colomn,i,j;
    printf("Enter the amount of rows : ");
    scanf("%d", &row);
    printf("Enter the amount of colomns : ");
    scanf("%d", &colomn);
    //read the matrix
    for(i=0;i<row;i++)
        {
        for(j=0;j<colomn;j++){
            printf("\nEnter the element of row: %d and colomn %d : ", i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    // print the matrix
    printf("\n your matrix is : \n");
     for(i=0;i<row;i++)
     {
        for(j=0;j<colomn;j++){
            printf("%d",matrix[i][j]);
        }
        printf("\n");
    }
    //transpose
    for(i=0;i<row;i++)
        {
        for(j=0;j<colomn;j++){
           transpose[j][i]=matrix[i][j];
        }
    }
    printf("\n transpose of your matrix is: \n");
     for(i=0;i<row;i++)
     {
        for(j=0;j<colomn;j++){
            printf("%d",transpose[i][j]);
        }
        printf("\n");
    }

}
