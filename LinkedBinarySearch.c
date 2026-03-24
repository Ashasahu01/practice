#include<stdio.h>

//list structure
struct list {
    int value;
    struct list *prev, *next;
};

struct list* LinkedBinarySearch(struct list *start, struct list *end, int item, int count){
    if(start == NULL || end == NULL){
        printf("Linked List is empty.");
        return NULL;
    }

    if(start == end){
        if(start->value == item)
            return start;
        else
            return NULL;
    }
   
    int i = 0;
    struct list *temp = start;
    int mid = count /2 ;

    while(i < count){
        temp = temp->next;
        i++;
    }

    if(temp->value < item){
        start = temp->next;
    }
    else if(temp->value > item){
        end = temp->prev;
    }
    else{
        return temp;
    }

    return LinkedBinarySearch(start, end, item, count);
}

int main(){
    printf("Enter Some values: ");
    
}