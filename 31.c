#include<stdio.h>

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int c;
	for(c =0;c<=a;c++)
	{
	int	d = a - c;
	if((2*c + 4*d) ==b)
		{
			printf("%d %d\n", c,d);
			return 0;
		} 
	}
	printf("此题无解\n");
	return 0;
}