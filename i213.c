#include<stdio.h>

int a[100000] = {0};
int main()
{
	int n, k, temp, list = -1 ;
	printf("Enter n: ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		printf("k: ");
		scanf("%d", &k);
		if(k == 1)
		{
			scanf("%d", &temp);
			list++;
			a[list] = temp;
		}else if(k == 2)
		{
			if(list == -1)
				printf("-1\n");
			else{
				printf("%d", a[list]);
				list--;
			}				
		}else
		{
			if(list == -1)
			{
			}else{
				a[list] = 0;
				list--;
			}
		}

	}
	return 0;
}
