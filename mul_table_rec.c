#include <stdio.h>

void table(int n,int i){
    if(i>10)
        return;
    else{
        printf("%d x %d = %d \n",n,i,n*i);
        table(n,i+1);
    }
}

int main(){
    int num;
    printf("Value of num : \n");
    scanf("%d", &num);
    
    table(num,1);
    return 0;
}