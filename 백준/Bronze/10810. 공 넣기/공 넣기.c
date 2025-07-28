#include <stdio.h>
int main(void)
{
	int N, M;
	scanf("%d %d", &N, &M);
	int i, j, k;
	int array[101] = { 0, };


	for (int m = 0; m < M; m++)
	{
		scanf("%d %d %d", &i, &j, &k);

		for (int l = i; l <= j; l++)
		{
			array[l] = k;
		}
	}
	for (int l = 1; l <= N; l++)
	{
		printf("%d", array[l]);
		if (l < N)
		{
			printf(" ");
		}
	}
	printf("\n");
	

	return 0; 
}