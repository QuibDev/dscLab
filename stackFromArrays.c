// program to implement stack using array in c 

// imports for c 
#include <stdio.h> 

// operations 
void push();
void pop();
void disp();


// top of stack
int tos;

// stack lenght
int n;

// stack;
int stack[100];

// main
void main() {

    // variables 
    int ch,flag = 1;
    tos = -1;
    n = 0;

    // size of stack 
    printf("\nDeclare size of stack [Max = 100]: ");
    scanf("%d",&n);


    // menu
    if (n > 0 && n <= 100) {
        while(flag  == 1) {
            
            printf("\n\nStack Program Using Array");
            printf("\n1.Push");
            printf("\n2.Pop");
            printf("\n3.Display");
            printf("\n4.Quit");

            printf("\n");
            printf("tos: %d",tos);

            printf("\n\nEnter operation >> ");
            scanf("%d",&ch);

            switch (ch) {

                case 1: push(); break;

                case 2: pop(); break;

                case 3: disp(); break;

                case 4: flag == -1; break;
            }
        }
        
        }
}


void push(){

    int elem;
    printf("Enter element: ");
    scanf("%d",&elem);

    if (tos >= n-1) {
        printf("\nStack overflow!");
    } else {
        tos++;
        stack[tos] = elem;
        printf("\nPush successful!");
    } 
}

void pop() {

    if (tos <= -1){
        printf("\nStack underflow");
    } else {
        printf("popped: %d",stack[tos]);
        tos--;
    }
}

void disp() {

    if (tos > -1 ){
        // stack is read from tos to bottom
        // tos to n 
        printf("\nCurrent Stack: ");
        for (int i = tos; i >= 0; i--){
            printf("\t%d",stack[i]);
        }
    } else {
        printf("\nStack is empty");
    }
}