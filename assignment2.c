#include<stdio.h>

int main(){
    int n;
    printf("type 1 for addition \n");
    printf("type 2 for subtraction \n");
    printf("type 3 for multiplication \n");
    printf("type 4 for division \n");

    printf("enter your choice :");
    scanf("%d", &n);

    int a, b;
    printf("enter first number : ");
    scanf("%d", &a);

    printf("enter second number : ");
    scanf("%d", &b);
    if(n == 1){
        printf("addition is %d", a + b);
    }
    else if(n == 2){
        printf("subtraction is : %d", a - b);
    }
    else if(n == 3){
        printf("multiplication is : %d", a*b);
    }
    else if(n == 4){
        printf("division is : %d", a/b);
    }
    else{
        printf("select correct option");
    }
}