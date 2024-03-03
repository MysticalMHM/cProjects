#include <stdio.h>
#include <stdlib.h>

int main(){
  double n1;
  double n2;
  int op;
	long double r;
  printf("4 OPERATION CALCULATOR\n\rby Max Sudarkoff\n\r");
  printf("n1? ");
  scanf("%lf", &n1);
  printf("n2? ");
  scanf("%lf", &n2);
  printf("op help:\n\r 1: +\n\r 2: -\n\r 3: *\n\r 4: /\n\rop? ");
  scanf("%d", &op);
	switch (op) {
		case 1:
			r = n1 + n2;
			break;
		case 2:
			r = n1 - n2;
			break;
		case 3:
			r = n1 * n2;
			break;
		case 4:
	  	r = n1 / n2;
			break;
		default:
			printf("ERROR: INVALID OP NUMBER\n\r");
			return 1;
	}
	printf("%.15Lf\n\r", r);
	
	return 0;
}
