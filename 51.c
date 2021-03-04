#include <stdio.h>
int sum(int a[],int n);
double average(int a[],int n);
int over_avg(int a[],int n, double avg);

int main()
{
int a[10];
int i;
int s;
double avg;
for(i=0;i<10;i++)
scanf("%d",&a[i]);
s=sum(a,10);
avg=average(a,10);
printf("%d,%.2lf\n",s,avg);
printf("%d\n", over_avg(a,10,avg));
return 0;
}

int sum(int a[],int n){
	int sum =0;
	for (int i = 0; i < n; ++i)
	{
		sum = sum + a[i];
	}
	return sum;
}

double average(int a[],int n){
	double d = 1.0;
	return sum(a,n)*d/n;
}

int over_avg(int a[],int n, double avg){
	int count =0;
	for (int i = 0; i < n; ++i)
	{
		if(a[i]>avg){
			count++;
			printf("%d,",a[i]);
		}
	}
	return count;
}