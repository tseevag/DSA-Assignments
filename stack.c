#include <stdio.h>
#define MAX 10

int top;

void push(int st[], int item) {
    if (top == MAX-1)
        printf("stack overflow \n");

    else{
        st[++top] = item;
        printf("%d is pushed\n", item);
    }
        
}

void pop(int st[]){
    if(top < 0)
        printf("stack underflow \n");

    else
        printf("Popped item is %d\n", st[top--]);
}

void transverse(int st[]){
    int i;
    if(top < 0)
        printf("stack underflow\n");

    else
        for(i = top; i >= 0; i--)
            printf("%d\t", st[i]);
}

int  main(){
    int st[MAX] = {3, 2, 1, 4};
    
    top = 3;
        

    push(st, 5);
    pop(st);
    transverse(st);

    return 0;
}