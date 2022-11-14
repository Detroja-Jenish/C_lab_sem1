#include <stdio.h>

int main()
{
        int n, fn, count = 0, N;
        printf("Enter a number and freqeuncy number   :  ");
        scanf("%d %d", &n, &fn);

	N = n;

        while(n > 0)
        {
        	if(n%10 == fn)
		{
			count++;
		}
		n = n/10;
	}

	printf("%d's freqeuncy in %d is %d...\n",fn, N, count);

        return 0;
}

