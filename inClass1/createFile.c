/*
 * createWriteFile.c
 *
 *  Created on: Feb 19, 2019
 *      Author: ronaldtran
 */


/*
 5*/
//CREATE AND WRITE TO FILE
#include <stdio.h>
 
int main() {
    FILE *fp;        //pointer to a file type
     
    fp = fopen("textFile.txt", "w+");
    fprintf(fp, "This is testing for fprintf...\n");
    fputs("This is testing for fputs...\n", fp);
    fclose(fp);
}
