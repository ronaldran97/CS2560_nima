/*
 * writeFile.c
 *
 *  Created on: Feb 19, 2019
 *      Author: ronaldtran
 */

/*6*/
 
#include <stdio.h>
 
void main() {
     
    FILE *fp;
    char buff[255];
     
    fp = fopen("textFile.txt", "r");
    fscanf(fp, "%s", buff);
    printf("1 : %s\n", buff );
     
    fgets(buff, 255, (FILE*)fp);
    printf("2: %s\n", buff );
     
    fgets(buff, 255, (FILE*)fp);
    printf("3: %s\n", buff );
    fclose(fp);
     
}
//HOW TO READ BINARY FILE
//fread() and fwrite()

