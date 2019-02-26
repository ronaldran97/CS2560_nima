#include <stdio.h>

/**
 * Write a program that can be used by a small theater to sell tickets for performances. The theater’s auditorium has
 * 15 rows of seats, with 30 seats in each row. The program should display a screen that shows which seats are
 * available and which are taken. For example, the following screen shows a chart depicting each seat in the theater.
 * Seats that are taken are represented by an * symbol, and seats that are available are represented by a # symbol:
Row 1 Row 2 Row 3 Row 4 Row 5 Row 6 Row 7 Row 8 Row 9 Row 10 Row 11 Row 12 Row 13 Row 14 Row 15
           Seats
123456789012345678901234567890
***###***###*########*****####
####*************####*******##
**###**********########****###
**######**************##******
********#####*********########
##############************####
#######************###########
************##****############
#########*****############****
#####*************############
#**********#################**
#############********########*
###***********########**######
##############################
##############################
Here is a list of tasks this program must perform:
• When the program begins, it should ask the user to enter the seat prices for each row. The prices can be stored in a
 separate array. (Alternatively, the prices may be read from a file.)
• Once the prices are entered, the program should display a seating chart similar to the one shown above. The user may
 enter the row and seat numbers for tickets being sold. Every time a ticket or group of tickets is purchased, the
 program should display the total ticket prices and update the seating chart.
• The program should keep a total of all ticket sales. The user should be given an option of viewing this amount.
• The program should also give the user an option to see a list of how many seats have been sold, how many seats are a
 vailable in each row, and how many seats are available in the entire auditorium.
Input Validation: When tickets are being sold, do not accept row or seat numbers that do not exist. When someone
 requests a particular seat, the program should make sure that seat is available before it is sold.
 *
 */

//This function will create/print the map of the theatre
void seatChart(int i, int j, char seats[][30]) {
    int rows = 15;
    int columns = 30;

    printf("\n                  Seats\n");
    fflush(stdout);
    printf("      012345678901234567890123456789");
    fflush(stdout);

    //prints rows
    for (int i = 0; i < rows; i++) {
        printf("\nRow %2d", i);
        fflush(stdout);
        //prints columns
        for (int j = 0; j < columns; j++) {
            printf("%c", seats[i][j]);
            fflush(stdout);
        }
    }

}

//Will get user input, provide menu, assigning pricing,
void userUI(void) {
    int row = 15;
    int column = 30;
    float prices[15];
    char seats[row][column];
    char TAKEN = '*';
    char OPEN = '#';
    int reserve;
    int i = 0;
    int j = 0;

    printf ("Please enter the price for each row of seats. \n");
    fflush (stdout);
    for (row = 0; row < 15; row = row + 1) {
        printf ("Row %2d:\n", row);
        fflush (stdout);
        scanf ("%f", &prices[row]);
        //printf("hi %f", prices[row]);
    }

    //Will set all seats to empty
    for (i = 0; i < row; i = i + 1) {
        for (j = 0; j < column; j = j + 1) {
            seats[i][j] = OPEN;
        }
    }

    seatChart (i, j, seats);

    //prompts for the number of seats to reserve and gets input
    printf ("\nHow many seats would you like to reserve?\n");
    fflush (stdout);
    scanf ("%d", &reserve);

    //Gets the row number and column number for the seats
    printf ("Enter the row and column number for the desired seat(s).\n");
    fflush (stdout);

    //for loop for amount seats
    for (int k = 1; k <= reserve; k = k + 1) {
        scanf ("%d %d", &row, &column);
        printf ("\nYou have selected Row %d, Column %d\n", row, column);
        fflush (stdout);

        //checks to see if seats are in the seating chart, if not then ask them to pick again.
        if (row > 14 || column > 30) {
            printf("The row and column are not available seats. \nPlease choose again. \n");
            scanf ("%d %d", &row, &column);
            printf ("\nYou have selected Row %d, Column %d\n", row, column);
            fflush (stdout);
            //puts the selected seats in the chart
            for (i = 0; i < 15; i = i + 1) {
                for (j = 0; j <= 30; j = j + 1) {
                    if (row == i && column == j) {
                        seats[i][j] = TAKEN;
                    }
                }
            }printf("price : %2f", &prices[row]);

        } else {
            //puts the selected seats in the chart
            for (i = 0; i < 15; i = i + 1) {
                for (j = 0; j <= 30; j = j + 1) {
                    if (row == i && column == j) {
                        seats[i][j] = TAKEN;
                        //row = i;

                    }
                }
            }
        } printf("price : %2f", &prices[row]);


    }
    seatChart (i, j, seats);


}

int main() {

    userUI();
    return 0;
}


