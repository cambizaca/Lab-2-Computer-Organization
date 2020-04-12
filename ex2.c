#include <stdio.h>
#include <math.h>

int main() {
	double sum;
	double max;
	double min;
	double product;

	double en;
	double reg;
	printf("Enter 10 floating-point numbers:\n");
	scanf("%lf", &reg);
	min = reg;
	sum = reg;
	product = reg;
	max = reg;

	for(int c = 0; c < 9; c++) {
	scanf("%lf", &en);
	sum = en + sum;
	product = product * en;
	if(en < min) {
		min = en;
	}
	if(en > max) {
		max = en;
	}
	}
	printf("Sum is %.5lf\n",sum);
	printf("Min is %.5lf\n",min);
	printf("Max is %.5lf\n",max);
	printf("Product is %.5lf\n", product);
}
