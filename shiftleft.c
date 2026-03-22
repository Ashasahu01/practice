#include<stdio.h>

int main(){
    int num ,result;

    printf("Enter an integer: ");
    scanf("%d", &num);

    result= num <<2;
    printf("Original number : %d\n", num);  //number before shifting 
    printf("After shifting 2 bits left: %d\n", result); // number after shifting

    return 0;
}