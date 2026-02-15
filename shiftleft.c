#include<stdio.h>

int main(){
    int num ,result;

    printf("Enter an integer: ");
    scanf("%d", &num);

    result= num <<2;
    printf("Original number : %d\n", num);
    printf("After shifting 2 bits left: %d\n", result);

    return 0;
}