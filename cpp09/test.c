#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[])
{
	struct tm	tim;
	for (int i = 1; i < argc; i++)	
	{
		if (strptime(argv[i], "%Y-%m-%d", &tim) != NULL)
			printf("num %d: SUCCESS\n", i);
		else
			printf("num %d: FAIL\n", i);
	}
}

			
