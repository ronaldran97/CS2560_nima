#include <stdio.h>


void chart() {
    int number, i, total;
    printf("What number would you like to use to make a multiplication table?");
    scanf("%d", &number);

    for (int k = 1; k < number + 1; ++k) {
        printf("%d ", k);
    }

    printf("\n");
//    for (int i = 1; i < number + 1; ++i) {
//        //will print a vertical multipliication table
//        //printf("%d * %d = %d \n", number, i, number*i);
//        //printf(" %d ", number*i);
//        printf("%d ", i );
//
//    }
//
//    printf("\n");
//    for (int j = 1; j < number + 1; ++j) {
//
//        printf("%d ", 2 * j);
//    }
//    //printf(" %d ", number * i);
//
//    printf("\n");
//    for (int k = 1; k < number + 1; ++k) {
//        printf("%d ", 3*k);
//    }
//
//    for (int l = 1; l < number + 1; ++i) {
//
//    }


    int rows = number;
    int columns = number;


    for(int i = 1; i < number+1; i++){
        for(int j = 1; j< number+1; j++){
            total = rows*columns;
            printf(" %d ",total);

            columns++;
        }//end j
        printf("\n",total);
        rows++;
        columns = 1;

    }// end i
}
int main() {
    chart();
    return 0;
}