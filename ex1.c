#include <stdio.h> 

int main() {

	int n;
	printf("Enter a number from 1 to 20:\n");
 	scanf("%d", &n);

	if(n > 0 && n < 21) {
		printf("Here are the first %i ordinal numbers:\n",n);
		if (n >= 1) {
			printf("1st\n");
		} if (n >=2) {
			printf("2nd\n");
		} if (n >= 3) {
			printf("3rd\n");
		} if (n >= 4) {
			for(int i = 4; i < n + 1; i++) {
				printf("%ith\n", i);
			}
		}
	} else {
		printf("Number is not in the range from 1 to 20\n");
	}
}
