#include <stdio.h>

int main() {
	int a=0;
	int m;
	printf("Enter six integers:\n");
	for(int i = 0; i < 6; i++) {
	scanf("%d", &m);
	a++;
	if(a==1) {
	printf("1234567890bb1234567890\n");
	}
	if(i%2==0) {
	printf("%*d",10,m);
	}else {
	printf("  ");
	printf("%*d\n",10,m);
	}
	}
}
