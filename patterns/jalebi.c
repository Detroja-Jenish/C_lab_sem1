#include<stdio.h>


int main(){
	int n=3;
	int a[n][n];
	int move=1;
	int count = 1;
	int i=0, j=0;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			a[i][j] = 0;
		}
	}
	i=0;
	j=0;
	while(a[i][j]==0)
	{
		if(i<0 || j<0 || i==n || j==n || a[i][j] != 0)
		{
			move++;
			if(move > 4)
			{
				move =1;
			}
		}
		switch(move)
		{
			case 1:
				a[i][j] = count;
				j++;
				if(j==n){
					j--;
					i++;
				}
				break;
			case 2:
				a[i][j] = count;
				i++;
				if(i==n){
					i--;
					j--;
				}
				break;
			case 3:
				a[i][j] = count;
				j--;
				if(j<0){
					j++;
					i--;
				}
				break;
			case 4:
				a[i][j] = count;
				i--;
				if(i<0){
					i++;
					j++;
				}
				break;
		}
		count++;
	}

	for(i=0; i<n; i++)
	{
		for(j=0;j<n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}


