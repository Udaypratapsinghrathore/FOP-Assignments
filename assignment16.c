#include<stdio.h>

int main(){
    int n, e = 0, o = 0;
    printf("enter number of elements : ");
    scanf("%d", &n);

    int arr[n], even[n], odd[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i<n; i++){
        if(arr[i]%2 == 0){
            even[e] = arr[i];
            e++;
        }
        else{
            odd[o] = arr[i];
            o++;
        }
    }

    printf("even numbers : ");

    for(int i = 0; i<e; i++){
        printf("%d ", even[i]);
    }

    printf("\nodd numbers : ");

    for(int i = 0; i<o; i++){
        printf("%d ", odd[i]);
    }

    
    
}