#include <stdio.h>
int main(void)
{
	int num;

	int array[31] = { 0, }; // [30]은 0번 부터 29번 인덱스만 있는 거임
	
	for (int i = 0; i < 28; i++)
	{
		scanf("%d", &num);
		array[num] = 1;
	}
	int missing1 = 0;
	int missing2 = 0;


	for (int i = 1; i <= 30; i++)
	{
		if (array[i] == 0)
		{
			if (missing1 == 0)
			{
				missing1 = i;
			}
			else
			{
				missing2 = i;
			}
		}
		
		
	}

	printf("%d\n", missing1); 
	printf("%d\n", missing2);



	return 0;
}