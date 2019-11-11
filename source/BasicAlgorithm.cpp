#include <Windows.h>


int main()
{
	int k, n, C;

	printf("Type k: \n");
	scanf("%d", &k);

	printf("Type the number cycles: \n");
	scanf("%d", &n);

	printf("Type the multiplicator: \n");
	scanf("%d", &C);

	for (int l = 0; l<10; l++)
	{
		k = C * (k - n * (k / n));
                printf("Generating 10 random numbers\n");
		printf("Random Number: %d\n", k);
		Sleep(1000);
	}

	
      return 0;
}

