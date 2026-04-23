#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Type 1 for addition \n");
    printf("Type 2 for subtraction \n");
    printf("Type 3 for multiplication \n");
    printf("Type 4 for division \n");
    printf("Type 5 for power \n");
    printf("Type 6 for factorial \n");
    scanf("%d", &n);

    float x, y;
    printf("enter first number : ");
    scanf("%f", &x);

    printf("enter second number : ");
    scanf("%f", &y);

    if(n == 1){
        printf("addition is : %f", x + y);
    }
    else if(n == 2){
        printf("subtraction is : %f", x - y);
    }
    else if(n == 3){
        printf("multiplication is : %f", x*y);
    }
    else if(n == 4){
        printf("division is : %f", x/y);
    }
    else if(n == 5){
        printf("power of x to the y is : %f", (int)pow(x,y));
    }
    else if(n == 6){
        if(y == 0){
            int fact = 1;
        for(int i = 1; i<=x; i++){
            fact = fact*i;
        }
        printf("factorial of x is : %f", fact);
        }
        else{
            printf("for factorial of x put y = 0");
        }
    }
    else{
        printf("select appropriate option");
    }
      return 0;
    
}