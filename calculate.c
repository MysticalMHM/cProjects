#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	double n1;
	double n2;
	char op;
	sscanf(argv[1], "%lf", &n1);
	sscanf(argv[2], "%lf", &n2);
	sscanf(argv[3], "%c", &op);
	if (){
		printf("usage:\n calc(ulate) [-h] n1 n2 op\n n1: double\n n2: double\n op: any char in array ['+','-','*','/']\n returns double\n\r");
		return 0;
	}
	if (argc < 4){
		printf("ERROR: NOT ENOUGH ARGS\nEXITED WITH CODE %d\n\r", 100+argc);
		return 100+argc;
	}
	if (argc > 4){
		printf("ERROR: TOO MANY ARGS\nEXITED WITH CODE %d\n\r", 100-argc);
		return 100-argc;
	}
	switch (op) {
		case '+':
			printf("%lf %c %lf = ", n1, op, n2);
			printf("%.15lf", n1 + n2);
			break;
		case '-':
			printf("%lf %c %lf = ", n1, op, n2);
			printf("%.15lf", n1 - n2);
			break;
		case '*':
			printf("%lf %c %lf = ", n1, op, n2);
			printf("%.15lf", n1 * n2);
			break;
		case '/':
			printf("%lf %c %lf = ", n1, op, n2);
			printf("%.15lf", n1 / n2);
			break;
		default:
			printf("ERROR: INVALID OP\nEXITED WITH CODE %d\n\r", 200+op);
			return 200+op;
	}
	printf("\n\r");

	return 0;
}
