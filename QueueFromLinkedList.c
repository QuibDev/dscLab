// queue from linked list

// c imports
#include <stdio.h>
#include <stdlib.h>

// struct
struct node{
    int x;
    struct node *next;
};

// vars
struct node *rear, *front;

// operations 
void enqueue();
void dequeue();
void disp();

// main 
void main() {

    // variables 
    int ch,flag = 1;

    // menu
    while(flag  == 1) {
        
        printf("\n\nQueue Program Using LinkedList");
        printf("\n1.Enqueue");
        printf("\n2.Dequeue");
        printf("\n3.Display");
        printf("\n4.Quit");

        printf("\n\nEnter operation >> ");
        scanf("%d",&ch);

        switch (ch) {

            case 1: enqueue(); break;

            case 2: dequeue(); break;

            case 3: disp(); break;

            case 4: flag == -1; break;
        }
    }
    
}

void enqueue(){

    struct node *ptr;

    
    ptr = (struct node *) malloc(sizeof(struct node*));

    // overflow check
    if (ptr == NULL){
        printf("\nOverflow error");
        return;
    } else {
    
    // ask for item 
    printf("\nElement to enqeue: ");
    scanf("%d",&ptr->x);


    if (front == NULL) {
        front = ptr;
        rear = ptr;
        printf("\nnode added");
        
    } else {
        
        // at least one element
        rear->next = ptr;
        rear = ptr;
        printf("\nnode added");
    }    

    }
}

void dequeue(){
    
    struct node *ptr;

    // check for underflow 
    if (front == NULL){
        printf("\nUnderflow");
    } else {

        // remove front element 
        ptr = front; 
        front = front -> next;
        free(ptr);
        printf("node deleted");
    }

}

void disp(){

    // check for null 

    // print from front to rear 

    struct node *ptr;

    if (front == NULL){

        printf("\nEmpty queue");

    } else {
        ptr = front;

        printf("\nQueue: \n");

        while(ptr != NULL){

            printf("\t%d",ptr->x);
            ptr=ptr->next;

        }
    }
}