/*
 * ternaryOp.c
 *
 *  Created on: Feb 19, 2019
 *      Author: ronaldtran
 */

//Ternary Operator - Can use in place of if/else or switch

#include <stdio.h>

main()
{
   int a , b;

   a = 10;
   printf( "Value of b is %d\n", (a == 1) ? 20: 30 );

   printf( "Value of b is %d\n", (a == 10) ? 20: 30 );
}
