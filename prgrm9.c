//call by reference 
#include<stdio.h>
int swap(int,int);
int swap(int &x,int &y){
    int temp= x;
    x=y;
    y= temp;
    return 0;
}

int main(){
    int a,b;
    a=10;
    b=30;
    swap(a,b);
    printf("%d %d", a,b);

    return 0;
}