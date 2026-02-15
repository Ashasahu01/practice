
int main(){
   int i,j;
   int a[3]={2,4,6};
   int fact;
   int b[3];
   printf("array elements are:- \n");
   for(i=0;i<3;i++){
   printf("a[%d] : %d \n",i,a[i]);
   }
   
   for(i=0;i<3;i++){
       fact=1;
   for(j=1;j<=a[i];j++) {
   fact=fact*j;
   b[i]=fact;
   }
   }
   
   printf("factorials are: \n");
   for(i=0;i<3;i++){
   printf("fact(a[%d]) : %d \n",i,b[i]);
   }
    return 0;
}
