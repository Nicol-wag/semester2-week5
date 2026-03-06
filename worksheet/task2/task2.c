/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name:duoyi Wang
 * ID: 201930782
 */

#include <stdio.h>
#include <string.h>

int main(void){
	long decimal=0;
	char hex[9];
	
	printf("Enter a hexadecimal:");
	scanf("%8s", hex);

	//Traverse this string until encounter '\0' 
	for (int i = 0; hex[i] != '\0'; i++) {
		char c = hex[i];
		int value;

		// 0 - 9
		if (c >= '0' && c <= '9') {
			value = (c - '0');
		}
		// A - F
		else if (c >= 'A' && c <= 'F') {
			value = (c - 'A') + 10;
		}
		// a - f
		else if (c >= 'a' && c <= 'f') {
			value = (c - 'a') + 10;
		}
		// if input contains invalid hex digit
		// printf("Error: Invalid Hexadecimal\n");
		else {
			printf("Error: Invalid Hexadecimal\n");
			return 1;
		}
		decimal = decimal*16 + value;

	}

	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}