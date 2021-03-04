#include <stdio.h>
#define N 80

void statistics(char string[], int number[]);         
int main(){
char string[N];       
int n[4]={0};         
gets(string);        
statistics(string,n);   
printf("%d,%d,%d,%d\n",n[0],n[1],n[2],n[3]);
return 0;
}

void statistics(char string[], int number[]){
	for (int i = 0; string[i]!=0; ++i)
	{
		if((string[i]>=65&&string[i]<=90)||(string[i]>=97&&string[i]<=122))
		{
			number[0]++;
		}
		else if(string[i]>=48&&string[i]<=57){
			number[1]++;
		}
		else if(string[i]==32){
			number[2]++;
		}
		else{
			number[3]++;
		}
	}
}