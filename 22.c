#include<stdio.h>

int main()
{
	 float a;
	 float sum = 0.0;
	scanf("%f",&a);
	if(a>400)
	{
		a -= 400;
		sum = 0.873*a + 220 * 0.623 + 180 *0.573;
	}
	else if(a>180){
		a -= 180;
		sum = a * 0.623 + 180 *0.573;
	}
	else {
		sum = a* 0.573;
	}
	printf("%.2f\n",sum);

	return 0;
}