#include<stdio.h>

void printTable(int lower, int upper){
	for (int i = 0; lower + i <= upper ; i +=2)
	{
		lower += 2;
		printf("%d %6.1f\n",lower, 5.0*(lower-32)/9 );
	}
}

int main()
{
	int lower,upper;
	scanf("%d%d",&lower,&upper);

	if((lower>upper)||lower>100||upper>100||lower<=0||upper<=0){
		printf("Invalid.\n");
		return 0;
	}

	printf("fahr celsius\n");
	printTable(lower,upper);
	return 0;
}