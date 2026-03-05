// Worksheet 2.5

/* 
 * Task 1.1 - Practice
 * Using for loop to print all prime numbers from 1 to 100.
 * recall that a prime number is a natural number greater than 1
 * and completely only divisible by 1 and itself.
 */

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    for (int num = 2; num <= 100; num++) {
		bool is_prime = true;

		for (int i = 2; i < num; i++) {
			if (num % i == 0) {
				is_prime = false;
				break;
			}	
		}
		if (is_prime == true) {
			printf("%d ", num);
		}
	}
	return 0;
}