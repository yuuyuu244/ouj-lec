/*
 * implement stack.
 */

/* 
 * File:   c2_1.c
 * Author: yuki
 * 
 * hey guys, i am Java programmer.
 * C language like Java
 * Created on 2018/03/21, 17:38
 */

#include <stdio.h>
#include <stdlib.h>

// definition

/** max length of args */
#define MAX 128

/** number of push success */
#define PUSH_SUCCESS 1

/** number of push failure */
#define PUSH_FAILURE -1

/** number of pop success */
#define POP_SUCCESS 2

/** number of pop failure */
#define POP_FAILURE -2

// args of stack
int stack[MAX];

// index of stack
int top;

/**
 * to confilm the top of stack.
 * @param stack args of stack
 * @param top   index of stack
 * @param data  input data
 * @return 
 */
int peek(int stack[], int *top, int *data) {
    if((*top) > 0) {
        *data = stack[(*top)-1];
        return POP_SUCCESS; 
    }
    
    return POP_FAILURE;
    
}

/**
 * inisialize method.
 * @param top index of stack
 */
void stack_init (int *top) {
    
   // defalt number 0
    *top = 0;
}

/**
 * to display items of stack.
 * @param stack args of stack
 * @param top   index of stack
 */
void display (int stack[], int top) {
    
    printf ("STACK (%d) :", top);
    
    for(int i = 0; i < top; i++) {
        printf("%d ", stack[i]);
    }
    
    printf("\n");
}

/**
 * to push into stack.
 * @param stack args of stack
 * @param top   index of stack
 * @param data  input data
 * @return result value
 */
int push(int stack[], int *top, int data) {
    
    // stack length exceeds a number of max
    if (*top >= MAX) {
        printf("stack length exceeds a number of max");
        // stack overflow
        return PUSH_FAILURE;
    } else {

        // store data to stack
        stack[*top] = data;
        (*top)++;
        return PUSH_SUCCESS;
    }
}

/**
 * to pop out of stack.
 * @param stack args of stack
 * @param top   index of stack
 * @param data  input data
 * @return result value
 */
int pop (int stack[],int *top, int *data) {
    
    // stack length below a number of 0
    if (*top <= 0) {
        printf("stack length below a number of 0");
        
        // stack empty
        return POP_FAILURE;
    } else {
    
        *data = stack[*top - 1];
        (*top)--;
        return POP_SUCCESS;
    }
}

/**
 * main method.
 */
int main() {

    // input data
    //int data;
    
    // initialization
    stack_init(&top);
    
    push(stack, &top, 300);
    
    display(stack, top);

    push(stack, &top, 200);
    
    display(stack, top);
    
    printfpop
    
    return EXIT_SUCCESS;
}

