#include<stdio.h>

int main()
{
	char a[100];
	//int isChar = 1;
	// for (int i = 0; i < 1000; i++)
	// {
	// 	scanf("%c",a[i]);
	// 	printf("%d, %c ",i,a[i]);
	// 	if(a[i]=="."){
	// 		break;
	// 	}
	// }

	gets(a);

	int count = 0;
	int beforeisSpace = 0;
	for (int i = 0; a[i]!=46 ; ++i)
	{
		
		if(a[i]==32 && !beforeisSpace){
			if(i!=0){
				printf("%d ",count);
			}
			count = 0;
			beforeisSpace = 1;
		}
		else if(a[i]==32 && beforeisSpace){
			continue;
		}
		else{
			beforeisSpace = 0;
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}