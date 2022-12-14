#include<stdio.h>


int main(){
	int n, i, j, count, move;
	printf("Enter a number : ");
	scanf("%d", &n);
	int a[n][n];
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			a[i][j] = 0;
		}
	}
	for(i=0, j=0, count=1, move = 1; count <= n*n; count++)
	{
		a[i][j] =count;
		switch(move)
		{
			case 1:
				j++;
				if(j==n-1 || a[i][j+1] != 0){
					move = 2;
				}
				break;

			case 2:
				i++;
				if(i==n-1 || a[i+1][j] != 0)
				{
					move = 3;
				}
				break;

			case 3:
				j--;
				if(j==0 || a[i][j-1] != 0)
				{
					move = 4;
				}
				break;
			case 4:
				i--;
				if(i==0 || a[i-1][j] != 0)
				{
					move = 1;
				}
				break;
		
		}
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%2d ",a[i][j] );
		}
		printf("\n");
	}
}

