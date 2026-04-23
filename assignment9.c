#include<stdio.h>

int main(){
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    int original = n;

    int rem, sum = 0;
    while(n != 0){
        rem = n%10;
        sum = sum + rem*rem*rem;
        n = n/10;
    }
    if(sum == original){
        printf("number is armstrong number ");
    }
    else{
        printf("number is not armstrong number");
    }
}