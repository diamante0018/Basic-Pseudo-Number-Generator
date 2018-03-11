#include "stdafx.h"
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main() {
	int a, b, c, d;
	int l;
	time_t t;

	while (1)
	{

		printf("Enter the first value: \n");
		scanf_s("%d", &b);

		printf("Enter the second value: \n");
		scanf_s("%d", &c);

		printf("How many times would you like to draw a random number? \n");
		scanf_s("%d", &d);

		if (d > (c - b)) {
			printf("Why would you want to generate this many numbers? \n\n");
		}

		else break;

	}


	srand((unsigned)time(&t)); // Initializes the seed of rand() with the current time 

	for (l = 0; l<d; l++) {
		a = rand() % c + b;
		printf("Random Value between %d and %d: %d\n", b, c, a); // a is the random number b and c are the parameters
	}

	Sleep(10000); // Added so that the user can see the results
    return 0;

}

