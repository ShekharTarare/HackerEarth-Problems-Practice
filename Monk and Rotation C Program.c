#include <stdio.h>

int main()
{
	int t, size, k, *arr, *tempArr;
	scanf("%d", &t);
	while(t > 0)
	{
		scanf("%d", &size);
		scanf("%d", &k);
		arr = (int *)malloc(size*sizeof(int));
		for(int i=0;i<size;i++)
			scanf("%d", &arr[i]);
		if(k > 0)
		{
			if(k > size)
				k = k%size;
			tempArr = (int *)malloc(k*sizeof(int));
			for(int i = 0; i < k; i++)
			{
				tempArr[i] = arr[size-i-1];
			}
			for(int j = size - 1; j > 0; j--)
			{
				arr[j] = arr[j - k];
			}
			for(int i = k - 1, j = 0; i >= 0; i--, j++)
			{
				arr[j] = tempArr[i];
			}
		}
		for(int i = 0;i < size; i++)
			printf("%d ", arr[i]);
		printf("\n");
		t--;
	}	
}