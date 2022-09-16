#include <stdio.h>
#include <unistd.h>

int main()
{

	int i = 0;
	while(1) {
		printf(" TEST COUNTER = %d\n", i);
		if(i > 1000) {
			i = 0;
		} else {
			++i;
		}
		sleep(2);
	}

	return 0;
}
