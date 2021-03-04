#include<stdio.h>

int main()
{
	int ft;
	scanf("%d", &ft);
	float ct;
	ct = (float)5/9*(ft - 32);//强制转换类型
	printf("%3.1f\n",ct );
	return 0;
}