#include<stdio.h>

int main(){
    float bpay;

    printf("enter basic pay : ");
    scanf("%f", &bpay);
    float HRA = 0.1*bpay;
    float TA = 0.05*bpay;
    float gross = bpay + HRA + TA;
    float ptax = 0.02*gross;
    float net = gross -  ptax;

    printf("gross salary = %.2f \n", gross);
    printf("net salary = %.2f \n", net);
    return 0;
}