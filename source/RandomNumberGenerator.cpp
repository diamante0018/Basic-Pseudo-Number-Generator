#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main() {
	int a, b, c, d;
	int l;
	time_t t;
	
	printf("Enter the first value: \n");
	scanf("%d", &b);

	printf("Enter the second value: \n");
	scanf("%d", &c);

	printf("How many times would you like to draw a random number? \n");
	scanf("%d", &d);

	srand((unsigned)time(&t)); // Initializes the seed of rand() with the current time 

	for (l = 0; l<d; l++) {
		a = rand() % c + b;
		printf("Random Value between %d and %d: %d\n", b, c, a); // a is the random number b and c are the parameters
	}
	
        return 0;

}

