#include<stdio.h>

int main(){
    int bnum, rem;
    int base = 1;
    int dec = 0;

    printf("Enter binary number(0 & 1) : ");
    scanf("%d", &bnum);

    while(bnum>0){
        rem = bnum%10;
        dec = dec + rem*base;
        base = base*2;
        bnum = bnum/10;
    }
    printf("decimal number is : %d", dec);
}