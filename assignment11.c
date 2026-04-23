#include<stdio.h>
#include<math.h>

int main(){
    int n;

    printf("Type 1 for square root \n");
    printf("Type 2 for square of number \n");
    printf("Type 3 for cube of number \n");
    printf("Type 4 for check number is prime \n");
    printf("Type 5 for factorial of number \n");
    printf("Type 6 for prime factor of number \n");
    
    printf("enter your choice(1-6) : ");
    scanf("%d", &n);
    
    int num;
    printf("Enter number : ");
    scanf("%d", &num);

    if(n==1){
        float x = 0.5;
        printf("square root of number is : %f", pow(num,x));
    }
    else if(n==2){
        printf("square of number is : %d", num*num);
    }
    else if(n == 3){
        printf("cube of number is : %d", num*num*num );
    }
    else if(n==4){
        int isprime = 1;

        if(num<=1){
            isprime = 0;
        }
        else{
            for(int i = 2; i<=num/2; i++){
                if(num%i == 0){
                    isprime = 0;
                    break;
                }
            }
        }
        if(isprime == 1){
            printf("prime");
        }
        else{
            printf("not prime");
        }
    }
    else if(n==5){
        int fact = 1;
        for(int i = 1; i<=num; i++){
            fact = fact*i;
        }
        printf("factorial of number is : %d", fact);
    }
    else if(n==6){
        int x = 2;
        if(num%2 == 0){
        printf("%d ", x);
        }
        else{
        for(int i =3; i<=num; i++){
            if(num%i == 0){
                printf("%d ", i);
                break;
            }
        }
    }
    }
    else{
        printf("select approprite option");
    }

}