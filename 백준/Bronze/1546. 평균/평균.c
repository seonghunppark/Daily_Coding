#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d", &N);
	double array[1001] = { 0, };

	int score = 0;
	int Max = 0;

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &score);

		array[i] = score;



		if (Max < score)
		{
			Max = score;
		}
		else
		{

		}

	}
	

	double sum = 0;
	for (int i = 0; i < N; i++)
	{
		array[i] = array[i] / Max * 100;
	}
	
	


	for (int i = 0; i < N; i++)
	{
		sum += array[i];
	}

	printf("%lf\n", sum / N);
	
		





	return 0; 
}