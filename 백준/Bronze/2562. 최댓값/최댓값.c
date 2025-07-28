#include <stdio.h>

int main(void)
{
	int num;
	int max_val;
	int max_idx;
	
	scanf("%d", &num);
	max_val = num;
	max_idx = 1;

	for (int i = 2; i <= 9; i++)
	{
		scanf("%d", &num);

		if (max_val < num)
		{
			max_val = num;
			max_idx = i;
		}
	}
	printf("%d\n", max_val);
	printf("%d\n", max_idx);



	return 0;
}