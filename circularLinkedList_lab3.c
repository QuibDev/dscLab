// imports for c 
#include <stdio.h>
#include <stdlib.h>

// declare struct type 
struct node {
    int x;
    struct node *next;
};

// create header 
struct node *head; 

// keep track of nodes
int n;

void disp();
void addFirst(); 
void addLast();
void addAtPos();
void removeLast();
void replace();

void main() {

    // variables 
    int flag = 1, ch;


    // switch menu
    while(flag == 1){

        printf("\nLabWork 3 Cicular List Program");
        printf("\n");

        printf("Please choose your operation.");
        printf("\n1. Add element at first.");
        printf("\n2. Add element at end.");
        printf("\n3. Add element at position.");
        printf("\n4. Remove element at last.");
        printf("\n5. Replace element.");
        printf("\n6. Display current list.");
        printf("\n7. Quit");
        printf("\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1:
                addFirst();
                break;

            case 2:
                addLast();
                break;

            case 3: 
                addAtPos();
                break;

            case 4:
                removeLast();
                break;

            case 5: 
                replace();
                break;

            case 6: 
                disp();
                break;

            case 7: 
                flag = 0;
                break;
        }

    }

}


void disp() {
    
    struct node *temp; 
    
    if (head == NULL)
        printf("\nEmpty List");
        
    else {
        temp = head; 
        printf("\n\n");
        while (temp->next != head) {
            printf("%d ",temp->x);
            temp = temp -> next;
        }
        printf("%d",temp->x);
    }
}

void addFirst() {

    struct node *temp, *p; 
    temp = (struct node*) malloc(sizeof(struct node*));
    
    if (temp == NULL) {
        printf("\nOverflow");
    }
    
    else {
        printf("\nEnter Value: ");
        scanf("%d",&temp->x); 

        if (head == NULL) {
            head = temp;
            head->next = head;

        } else {
            p = head;

            while (p-> next != head){
                p = p->next;
            }
            

            p->next = temp;
            temp->next = head;
            head = temp;
            n++;

        }
    }
}

void addLast() {

    struct node *temp, *p; 
    temp = (struct node*) malloc(sizeof(struct node*));
    
    if (temp == NULL) {
        printf("\nOverflow");
    }
    
    else {
        printf("\nEnter Value: ");
        scanf("%d",&temp->x); 

        if (head == NULL) {
            head = temp;
            head->next = head;

        } else {
            p = head;

            while (p-> next != head){
                p = p->next;
            }
            

            p->next = temp;
            temp->next = head;
            n++;

        }
    }
}


void addAtPos(){

    // ask for position
    int pos;

    printf("\nEnter the position: ");
    scanf("%d",&pos);

    if (pos < 1 || pos > n){
        printf("Invalid position arguement.");
        return;
    }
    else if (pos == 1)
        addFirst();
    else if (pos == n)
        addLast();
    else {

        // variable
        struct node *p, *q;

        // take input 
        printf("\n\nEnter element: ");
        scanf("%d",&p->x);

        // go to the pos 
        q = head;
        for (int i = 1; i < pos; i++){
            q=q->next;
        }

        // insert node in the middle
        p->next = q->next;
        q->next = p;

    }

}

void replace(){

    int elem, y;
    struct node *p;

    printf("\nEnter element to replace (x): ");
    scanf("%d",&elem);
    printf("\nEnter elements to repalce with (y): ");
    scanf("%d",&y);

    // start at head;
    p = head;

    // iterate and replace occurences
    while (p->next != head){

        if (p->x == elem){
            p->x = y;
        }

        p = p->next;
    }

    // special check for tail
    if (p->x == elem){
        p->x = y;
    }

}

void removeLast() {

    // variables 
    struct node *p,*q;

    // start at head
    p = head;

    // iterate till before tale
    while(p->next != head) {
        q = p;
        p = p->next;
    }

    // delete element
    free(p);

    // update pointers
    q->next = head;
    
}