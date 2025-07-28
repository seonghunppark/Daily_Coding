#include <stdlib.h>

int main(void)
{
	int N; 
	scanf("%d", &N);

	int* array = malloc(N * sizeof(int)); 
	
	int* pa = array; 
	


	for (int i = 0; i < N; i++)
	{
		scanf("%d", pa++); 

	}

	int v;
	int count = 0;
	scanf("%d", &v); 
	pa = array; 
	for (int i = 0; i < N; i++)
	{
		if (v == *pa++) 
		{
			count++; 
		}
	}
	printf("%d\n", count); 
	free(array);




	return 0;
}
