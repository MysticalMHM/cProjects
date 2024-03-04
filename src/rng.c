#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

double randfrom(double min, double max){
	double range = (max - min);
	double div = RAND_MAX / range;
	srand(time(NULL));
	return min + (rand() / div);
}

int main(int argc, char* argv[]){
	double minn = 0.0;
	double maxn = 100.0;
	
	if (argc > 1){
		if (argc < 3){
			printf("ERROR: MIN SUPPLIED BUT NOT MAX\n\r");
			return 1;
		}
		
		if (argc > 3){
			printf("ERROR: TOO MANY ARGUMENTS\n\r");
			return 1;
		}

		if (argc == 3){
			sscanf(argv[1], "%lf", &minn);
			sscanf(argv[2], "%lf", &maxn);
		}
	}
	double randomn = randfrom(minn, maxn);
	printf("%lf\n\r", randomn);
	
	return 0;
}
