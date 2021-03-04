#include<stdio.h>

int fibonacci(int x)
{
	printf("we are in %d fibonacci\n",x);
	if(x>=3)
		return fibonacci(x-1)+fibonacci(x-2);
	else 
		return 1;
}

int powf(int x,int n){
	if(n>0){
		return powf(x,n-1)*x;
	}
	else
		return 1;
}

int main( )
{
	//printf("%d\n", fibonacci(15));
	int count; 
	scanf("%d",&count);
	for (int i = 0; i < count; ++i)
	{
		printf("pow(3,%d) = %d\n",i,powf(3,i));
	}
}