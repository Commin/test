#include<stdio.h>

int main(){
	int sex;
	int a,b,c;
	scanf("%d%d%d%d",&sex,&a,&b,&c);
	float expect;
	int temp;
	if(sex==1)
		expect = (float) (a + b) * 1.08 /2;
	else if(sex==2)
		expect = (float) (a * 0.923 + b) /2;
	else{
		printf("输入的性别错误\n");
		return 0;
	}
	temp = expect * 10;
	int expectInt;
	if(temp%10 >= 5)
	{
		expect += 1;
	}
	expectInt = expect;
	
	printf("%d\n",expectInt);
	if(expectInt - c < 3 && expectInt - c > -3){	
		printf("符合\n");
	}
	else{
		printf("不符合\n");
	}
	
}


