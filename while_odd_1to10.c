#include <stdio.h>

int main()
{
	int i = 1;
	while(i<=10)
	{
		if(i%2 == 1){
            printf("%d\n", i);
        }
		i++;
	}
	return 0;
}
