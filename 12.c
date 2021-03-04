#include<stdio.h>

int main()
{
	int c;
	scanf("%d",&c);
	int i;
	int sum = 0;
	for(i = 0; i<5;i++)
	{
		sum *= 10;
		if(c%10)
		{//sum = sum + c%10;
			sum += c%10;
		}
		c /=10;
	}
	printf("%d",sum);
	return 0;
}