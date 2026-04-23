#include<stdio.h>

// without pointers (don't affect original value)
int swap(int a, int b);

// int main(){
//     int x,y;
//     printf("enetr first number : ");
//     scanf("%d", &x);

//     printf("enetr second number : ");
//     scanf("%d", &y);

//     swap(x,y);
    
// }

// int swap(int a, int b){
//     int t = a;
//     a = b;
//     b = t;
//     printf("first number : %d second number : %d", a, b);;
// }

// using pointers

void _swap(int *a, int *b);

int main(){
    int x, y;
    printf("enetr first number : ");
    scanf("%d", &x);

    printf("enetr second number : ");
    scanf("%d", &y);

    _swap(&x,&y);
    printf("first nnumber : %d  second number : %d", x, y);

}

void _swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;

}