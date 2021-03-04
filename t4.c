#include<stdio.h>

const float pi = 3.14159;

int main()
{
	while(1)
	{
		printf("1-Ball\n2-Cylinder\n3-Cone\nother-Exit\nPlease enter your command:\n");

	int select;
	float r,h;
	scanf("%d",&select);

		switch(select){
			case 1:
				printf("Please enter the radius:\n");
				scanf("%f",&r);
				printf("%.2f\n",pi*4/3*r*r*r);
				break;
			case 2:
				printf("Please enter the radius:\n");
				scanf("%f%f",&r,&h);
				printf("%.2f\n",pi*r*r*h);
				break;
			case 3:
				printf("Please enter the radius:\n");
				scanf("%f%f",&r,&h);
				printf("%.2f\n",pi/3*r*r*h);
				break;
			default:
				return 0;
		}
	}
	return 0;
}