/*
 * hwThree.c
 *
 *  Created on: Feb 19, 2019
 *      Author: ronaldtran
 */



#include <stdio.h>



int ticTacToe(){
	  	int won = 0;
	   	int x,y;
	   	char board[3][3];

	   	for(int a = 0; a < 3; a++){
	   		for(int b = 0; b < 3; b++){
	   			 board[a][b] = '*';
	   			  printf("%c",board[a][b]);

	   			   			printf("\n");
	   			   			}
	   	}
}
/**
	 * In a population, the birth rate is the percentage increase of the population due to births,
	 * and the death rate is the percentage decrease of the population due to deaths. Write a program
	 * that displays the size of a population for any number of years. The program should ask for the following data:
• The starting size of a population
• The annual birth rate
• The annual death rate
• The number of years to display
Write a function that calculates the size of the population for a year. The formula is
N = P + BP − DP
where N is the new population size, P is the previous population size, B is the birth rate, and D is the death rate.
	 */
int populationCalc() {
	printf("Enter starting population size: \n"
			"annual birth rate: \n"
			"annual death rate: \n"
			"and number of years: \n");
	   int popStart, birthRate, deathRate, numYears;
	   fflush(stdout);
	   scanf("%d", &popStart);
	   scanf("%d", &birthRate);
	   scanf("%d", &deathRate);
	   scanf("%d", &numYears);
	   if(popStart < 2 || birthRate < 0 || deathRate < 0 || numYears < 1){
		   printf("Enter starting pop. size, annual birth rate, annual death rate, and number of years \n"); int popStart, birthRate, deathRate, numYears;
		   fflush(stdout);
		   scanf("%d", &popStart);
		   scanf("%d", &birthRate);
		   scanf("%d", &deathRate);
		   scanf("%d", &numYears);

	   double newPop = popStart + birthRate - deathRate;

	   printf("new population: %lf", newPop);
	   } else {
		   for (int i = 0; i < numYears; i++) {
			   int newPop = popStart + birthRate - deathRate;
			   printf("Start pop: %d New pop: %d\n", popStart, newPop);
			   	   		   			  popStart = newPop;
		   }
	   }



	   return 0;
}

int* reverseArray(int arr[], int size) {
	int copy[5];
	int *newArray = copy;
	printf("Reverse:");
	for (int i = 0; i < size; ++i)
	    {

	        copy[i] = arr[size - (i + 1)];

	        printf("%d", copy[i]);
	    }
		return newArray;

}// end of revArray


int main() {



	int i;
	double Radius,
	   Length,
	   Width,
	   Base,
	   Height,
	   Area;
	printf("Geometry Calculator\n");
	printf("	1. Calculate the Area of a Circle\n");
	printf("	2. Calculate the Area of a Rectangle\n");
	printf("	3. Calculate the Area of a Triangle\n");
	printf("	4. Quit\n\n");
	printf("Enter your choice (1-4):");

		fflush(stdout);
		scanf("%d", &i);

	switch (i) {
	case 1:
		printf("Radius of a circle: ");
		fflush(stdout);
		scanf("%lf \n", &Radius);
		Area = (3.14159)*(Radius*Radius);
		printf("The area of the circle is %lf \n", Area);
		break;
	case 2:
		printf("Enter the Length");
		fflush(stdout);
		scanf("%lf \n", &Length);
		printf("Enter the Width");
		scanf("%lf \n", &Width);
		Area = Length * Width;
		printf("The area of the rectangle is %lf \n", Area);
		break;
	case 3:
		printf("Enter the base of the triangle: ");
		fflush(stdout);
		scanf("%lf \n", &Base);
		printf("Enter the height of the triangle: ");
		scanf("%lf \n", &Height);
		Area = (Base * Height) * .5;
		printf("The area of the triangle is %lf \n", Area);
		break;
	case 4:
		printf("Exiting Geometry Calculator\nGoodbye!\n");
		break;
	default:
		printf("Invalid Entry!\nPlease re-run the program and "
    				   "enter a valid menu choice.\n");
	}



		populationCalc();


		printf("\n original array: ");
		int n = 9;
		int array[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
		for (int i = 0; i < n; i++) {
			printf("%d", array[i]);
		}
		printf("\n");
		reverseArray(array, 9);

		tictactoe();

	return 0;
}



