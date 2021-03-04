#include<stdio.h>

int main()
{
	char str[50];
	gets(str);

	puts(str);
	for (int i = 0; str[i]!=0; ++i)
	{
		//65 - 90
		if(str[i]>=65 && str[i]<=90){
			str[i] = str[i]+3;
			if(str[i]>90){
				str[i] = str[i]-26;
			}			
		}
		else if(str[i]>=97 && str[i]<=122){
			str[i] = str[i]+3;
			if(str[i]>122){
				str[i] = str[i]-26;
			}			
		}
	}

	puts(str);
	return 0;
}