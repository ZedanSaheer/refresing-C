 #include<stdio.h>
 #include<conio.h>
 #include<math.h>
 void main(){
    double a,sum=0;
    int i,n;
    printf("S=1+(1/2)^2+(1/3)^3...+(1/n)^n");
    printf("\nplease enter n'th number : ");
    scanf("%d",&n);
    for(i=1;i<=n;++i){
        a=1/pow(i,i);
        sum+=a;
    }
    printf("\n sum = %f ",sum);
    getch();
 }
