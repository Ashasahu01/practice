#include<stdio.h>
int main(){
    int n,i;
    printf("Enter any no. for multiplication table: ");
    scanf("%d", &n);

    printf("Multiplication Table for %d is \n", n);
    for(i=1; i<=10; i++){
        printf("%d * %d = %d", n,i,n*i);
    }
    return 0;
}