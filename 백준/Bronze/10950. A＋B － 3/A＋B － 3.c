#include <stdio.h>

int main(void)
{
	int A, B;
    int T;
	printf("");
	scanf("%d", &T);

	for (int i = 1; i <= T; i++)
	{
		printf("");
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B);
		
	}



	return 0;
}