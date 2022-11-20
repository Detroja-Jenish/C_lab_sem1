#include <stdio.h>

int main()
{
        int n, fn, count = 0, i;

        printf("Enter a number and freqeuncy number   :  ");
        scanf("%d %d", &n, &fn);

        for(i=n; i>0; i = i/10)
        {
        	if(i%10 == fn)
		{
			count++;
		}
	}

	printf("%d's freqeuncy in %d is %d...\n",fn, n, count);

        return 0;
}

