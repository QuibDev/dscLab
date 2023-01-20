// Linked list
#include <stdio.h>
#include <stdlib.h>


struct node {
    int x;  // where value is stored
    //float y; // store floats
    //char z; // store chars  
    struct node *next; // where pointer of next item is stored
    //struct node *prev; // where pointer of last item is stored

};

struct node *Head; // header node

void addFirst();
void disp();

void main() {
    int f = 1, ch; 

    while (f==1){
        printf("\n\n\nMenu:");
        
        printf("\n1. AddFirst");
        printf("\n2. Disp");
        //printf("\n3. AddLast");
        //printf("\n4. Search");
        printf("\n5. RemoveLast");
        printf("\n6. RemoveAtIndex");
        printf("\n\nEnter Choice: ");

        scanf("%d",&ch);

        switch(ch){ 
            case 1: // Add element
            addFirst();
            break;

            case 2: // display element 
            disp();
            break; 

            case 3: // Add element at last
            addLast();
            break;

            case 4: // Add element at last
            search();
            break;

            case 5: // remove last element
            removeLast();
            break;

            case 6: // remove element at index
            removeIndex();
            break;

            case 7: // quit scenario
            f = -1;
            break; 
        }
    }
}

void addFirst() {

    // Method to add add an element to a linked list

    struct node *temp; // creating a temporary node 
    
    temp = (struct node*)malloc(sizeof(struct node*));

    if (temp==NULL) // size of temp is 0 overflow error. 
        printf("\nOverflow");
     
    else {

        int y; // temporary input variable
        printf("Enter Value: ");
        scanf("%d",&y);

        temp->x = y;  // store the input value to temp's value 

        temp->next = Head; // update the temp pointer to point to header

        Head = temp; // make temp the header element

    }
}

void disp() {
        
        // method to go through a linked list and print each element

        struct node *temp; 

        if (Head==NULL)
            printf("Empty list"); 

        else {
            temp = Head; // make temp head 

            while (temp->next != NULL ){ 
                
                // as long as the node pointer is not null next element exists

                printf("%d ", temp->x); // print the node value 
         
                temp = temp->next; // update temp to point to next node   

            }

            if (temp->next == NULL) {

                // handle case last element of the list

                printf("%d ", temp->x);

            }

            


        }


}

void addLast() {

    struct node *temp, *ptr; // declare temporary node and pointer node

    temp = (struct node *)malloc(sizeof(struct node *)); // detecting overflow;

    printf("Enter Number: "); 
    scanf("%d",&temp->x);

    temp -> x = NULL; // make the last node point to null

    if (temp == NULL){
        printf("\nOverflow Error");
    }

    if (Head==NULL){  // first check header
        Head = temp; 
    }

    else {
        ptr = Head; // start from header

        while (ptr->next != NULL){ 
            
            // keep going to next element until you find the last one

            ptr = ptr->next; 
        }

        ptr-> next = temp;  // make pointer point to temp


    }

}

void search() {
        
        // method to go through a linked list and print each element

        struct node *temp; 

        // counter
        int count = 0;

        int p;
        printf("\nEnter search element: ");
        scanf("%d",&p);

        if (Head==NULL)
            printf("Empty list"); 

        else {
            temp = Head; // make temp head  

            while (temp->next != NULL ){ 
                
                // as long as the node pointer is not null next element exists

                if (temp->x == p){
                    count++;
                }
         
                temp = temp->next; // update temp to point to next node   

            }    

            if (temp->next == NULL) {

                // last element of the list

                if (temp->x == p){
                    count++;
                }

            }

            if (count != 0)
                printf("\nElement %d found %d times", p, count);
            else 
                printf("\nElement %d not in list.");



        }


}

void removeLast() {

    // removes the element last entered by 
    // the user

    struct node *p, *q; // we'll use two pointers of type node.

    if(Head==NULL)
        printf("empty list");   // if head is empty then no list

    else if (Head->next == NULL) {

        free(Head);     // deallocates the memory previously allocated by malloc.

        printf("List is now empty"); // head was the only element

    }

    else {

        p = Head;  // 1. starting from head 

        while (p->next->next != NULL){  // 2. loop until we reach the tail of the stack
            p=p->next; 
        }

        q = p->next;
        free(q); // 3. free memory used to store last element
        p->next = NULL;

    }


}

void removeIndex(){

    struct node *p, *q; 
    int counter=1,index,flag;

    printf("\nEnter index: "); 
    scanf("%d",&index);

    // 1. starting at p = head.
    p = Head; 

    // 2. while loop until the index == counter;

    while (flag  == 1){
        q=p;
        p=p->next;
        
        if (counter == index)
        {
            // 3. point q->next to p->next 
            q->next = p->next; 

            //4. free (p)
            free(p);

            //break loop
            flag = -1;
        }

        counter++;

    }


    
    
}