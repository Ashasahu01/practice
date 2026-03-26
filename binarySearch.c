#include<stdio.h>

int binarySearch(int A[], int s, int e, int item){
    while(s <= e){
        int mid = s + (e - s)/2;

        if(A[mid] > item)
            e = mid - 1;

        else if(A[mid] < item)
            s = mid + 1;

        else 
            return mid;
    }
    return -1;
}

int main(){
    int arr[] = {1, 3, 6, 8, 9, 12, 14, 19, 32};
    int n = sizeof(arr) / sizeof(arr[0]); 
    binarySearch(arr,0, n,9);
    return 0;
}