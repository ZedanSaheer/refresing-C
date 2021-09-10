#include<stdio.h>
#include<conio.h>
void main(){
    int line,allot,star,space=10;
    for(line=0;line<5;line++)
    {
        for(allot=0;allot<space;allot++){
            printf(" ");
        }
        for(star=0;star<2*line+1;star++){
            printf("*");
        }
        space--;
        printf("\n");
    }
    getch();
}
