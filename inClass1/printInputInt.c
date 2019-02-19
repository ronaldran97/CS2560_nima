/*
 * printInputChar.c
 *
 *  Created on: Feb 19, 2019
 *      Author: ronaldtran
 */

/*
 2*/
#include <stdio.h>  //standard input output built into c library
 
typedef int number;
 
int main() {
     
    number c;
    printf( "Enter a value :");
    fflush(stdout);  //ECLIPSE BUG
    c = getchar( );
     
    printf( "\nYou entered: ");
    putchar( c );
     
    return 0;
}
