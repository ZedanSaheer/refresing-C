#include<stdio.h>
#include<conio.h>

void merge(int[],int[],int,int,int[]);

void main(){
    int a[100],b[100],m,n,i,sorted[100];
    printf("enter the size of array A : ");
    scanf("%d",&m);
    printf("enter the elements of array A : ");
    for(i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the size of array B : ");
    scanf("%d",&n);
    printf("enter the elements of array B : ");
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    merge(a,b,m,n,sorted);
    printf("your sorted merged array : \t");
    for(i=0;i<m+n;i++){
        printf("%d \t" , sorted[i]);
    }
    getch();
}

void merge(int a[],int b[],int m,int n,int sorted[]){
    int i=0,j,k;
    j=k=0;
    for(i=0;i<m+n;){
        if(j<m && k<n){
            if(a[j]<b[k]){
                sorted[i]=a[j];
                j++;
            }else{
                sorted[i]=b[k];
                k++;
            }
            i++;
        }else if(j==m){
            for(;i<m+n;){
                sorted[i]=b[k];
                k++;
                i++;
            }
        }else{
            for(;i<m+n;){
                sorted[i]=a[j];
                j++;
                i++;
            }
        }
    }
}
