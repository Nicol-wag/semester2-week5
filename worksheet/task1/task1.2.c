// Worksheet 2.5

/* 
 * Task 1.2 - Practice
 * Write a program that allows a user to enter a series of positive numbers using a while loop. 
 * The loop should only stop when the user enters a -1.
 * The program then calculates and prints the average of these numbers. 
 */

#include <stdio.h>

int main(void) {

	printf("--- Average Calculator ---\n");
	//initial
    int input = 0;
	int sum = 0;
	int count = 0;

	printf("Enter a positive number(or -1 to stop): ");
	scanf("%d", &input);

	//As long as the input is not -1, it will keep looping
	while (input != -1) {
		
		sum = sum + input;
		count++;

		printf("Enter a positive number (or -1 to stop): ");
		scanf("%d", &input);
	}
	if (count > 0) {

		double average = (double)sum / (double)count;
		printf("Average: %f\n", average);
	} else {
		printf("no numbers were entered .\n");
	}

	return 0;
}