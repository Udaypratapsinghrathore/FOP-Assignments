#include<stdio.h>

int main(){
    int sub1, sub2, sub3, sub4, sub5;

    printf("marks of sub 1 : ");
    scanf("%d" , &sub1);
    printf("marks of sub 2 : " );
    scanf("%d" , &sub2);
    printf("marks of sub 3 : " );
    scanf("%d" , &sub3);
    printf("marks of sub 4 : " );
    scanf("%d" , &sub4);
    printf("marks of sub 5 : " );
    scanf("%d" , &sub5);

    int sum = ( sub1 + sub2 + sub3 + sub4 + sub5 );
    int per = sum/5;

    if(sub1>=40 && sub2>=40 && sub3>=40 && sub4>=40 && sub5>=40){
        if(per >= 75 && per <= 100){
            printf("Distinction");
        }
        else if(per >= 60 && per <75){
            printf("first division");
        }
        else if(per >= 50 && per < 60){
            printf("second division");
        }
        else if(per >= 40 && per < 50){
            printf("third division");
        }
    }
    else{
        printf("Fail");
    }
    
}