#include<stdio.h>

int main()
{
	int i,j;
	int count=0;
	int a[10];
	for (i = 0; i < 10; ++i)
	{
		scanf("%d",&a[i]);
		if(a[i]>100){
			i--;
			continue;
		}
		if(a[i]<0){
			count = i;
			break;
		}
	}
	if(count == 0)
		count = 10;

	for (i = 0; i < count-1; ++i)
	{
		for (j = 0; j < count-1-i; ++j)
		{
			if(a[j]<a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}

	for (i = 0; i < count; ++i)
	{
		printf("%d ", a[i]);
	}		
	printf("\n");

	int num =0;
	for (i = 0; i < count; ++i)
	{
		if(a[i]< 60){
			num++;
			printf("%d ", a[i]);
		}
	}
	printf("%d\n", num);
	
	printf("%d %d\n", a[0],a[count-1]);
	return 0;
}
