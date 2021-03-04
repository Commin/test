#include<stdio.h>

int findYear(int y, int n);

int main()
{
	int y, n;
	int x;

	scanf("%d%d",&y,&n);

	x = findYear(y,n);

	printf("%d %04d\n",x,y+x);

	return 0;
}

int findYear(int y, int n){
	int year[4];
	int x=0;
	for(; x< 100;x++){
		int yTemp = y;
			for (int i = 0; i < 4; ++i)
		{
			year[i] = yTemp % 10;
			yTemp = yTemp /10;
		}

		//sort
		 int i, j, temp;
    	for (j = 0; j < 4 - 1; j++)
        	for (i = 0; i < 4 - 1 - j; i++)
        {
            if(year[i] > year[i + 1])
            {
                temp = year[i];
                year[i] = year[i + 1];
                year[i + 1] = temp;
            }
        }

		//compare
		int diffCount = 0;
			if(year[3]!=year[0]){
				diffCount ++;
			}
		for (int i = 0; i < 3; ++i)
		{
			if(year[i]!=year[i+1]){
				diffCount ++;
			}
		}

		if (diffCount == n)
		{
			return x;
		}
		y++;
	}
	return x;
}