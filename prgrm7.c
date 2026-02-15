//example of call by value
#include<stdio.h>

int add(int x,int y){
    int z= x+y;
    return z;
}

int main(){
    int a,b,sum;
    printf("Enter value of a and b \n : ");
    scanf("%d %d", &a,&b);
    sum = add(a,b);
    printf("sum is %d\n", sum);

    return 0;
}
