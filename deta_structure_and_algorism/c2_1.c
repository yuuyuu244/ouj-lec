/*
 * implement stack.
 */

/* 
 * File:   c2_1.c
 * Author: yuki
 *
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

/*
 * peek
 * this method is to confilm the top of stack.
 *
 */
int peek(int stack[], int *top, int *data) {
    if((*top) > 0) {
        *data = stack[(*top)-1];
        return POP_SUCCESS; 
    }
    
    return POP_FAILURE;
    
}


/*
 * 
 */
int main(int argc, char** argv) {

    return (EXIT_SUCCESS);
}

