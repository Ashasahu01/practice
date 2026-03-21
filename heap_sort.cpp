#include<iostream>
using namespace std;

//Max Heapify
void maxHeapify(int arr[], int i, int length){
    int largest = i;
    int l, r;

    l= 2*i + 1;
    r = 2*i + 2;

    if(l < length && arr[l] > arr[largest]){
        largest = l;  //if left child is greater 
    }
    if(r< length && arr[r] > arr[largest]){
        largest = r; //if right child is greater
    }
    if(largest != i){
        swap(arr[i], arr[largest]);  //swap ith elm with largest
        maxHeapify(arr, largest, length); //again call max heapify for subtree
    }
}

//building max heap 
void buildMaxHeap(int arr[], int length){
    
    for(int i = length/2 -1; i>=0; i--)
        maxHeapify(arr,i,length);  
}

//Heap Sort
void heapSort(int arr[], int length){
    buildMaxHeap(arr, length);
    for(int i = length-1; i>0; i--){
        swap(arr[0],arr[i]);
        maxHeapify(arr,0,i);
    }
}

void show(int arr[], int length){
    for(int i=0; i<length; i++)
        cout << arr[i] << " ";
}
int main(){
    int length;
    cout << "Enter Size of array: ";
    cin >> length ;

    int arr[100];
    cout << "Enter Array Elements : ";
    for(int i =0; i<length; i++){
        cin >> arr[i];
        cout << " ";
    }
    
    heapSort(arr, length);
    show(arr, length);

    return 0;
}