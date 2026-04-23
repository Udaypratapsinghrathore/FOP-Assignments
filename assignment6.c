#include<stdio.h>

// with Recursion

 int fact(int n);

  int main(){
      int num;
      printf("enter number : ");
      scanf("%d", &num);

     int factorial = fact(num);

      printf("factorial is : %d", factorial);
      return 0;
  }

  int fact(int n){
      if(n==1 || n==0){
          return 1;
     }
      return n*fact(n-1);
  }
 
// without recursion

int main(){
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    if(n==0){
        printf("factorial is : 0");
    }
    else{
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact = fact*i;

    }
    printf("factorial is : %d", fact);
}
}

