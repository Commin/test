#include<stdio.h>

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int account =0;
	int sum =0;
	if(m>=1 && n>=m && 500>=n){
		int i;
		for(i = m; i<= n; i++){
			int j;
			for(j =2; j<i;j++){
				if(i%j == 0)
				break;
			}
			if(j == i){
				account ++;
				sum += i;
			}
		}
		printf("%d %d\n",account,sum);
	}
	else{
		printf("输入数据错误\n");
	}

	return 0;
}