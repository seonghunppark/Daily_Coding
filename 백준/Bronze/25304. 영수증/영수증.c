#include <stdio.h>
int main(void)
{
	int X;
	scanf("%d", &X);

	int N;
	scanf("%d", &N);

	int a, b;
	int total = 0;


	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &a, &b);
		total += a * b;
	}
	
	if (total == X)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}





	return 0;
}