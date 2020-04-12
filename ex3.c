#include <stdio.h>

int main() {
	int l;
	int a =0;
	printf("Enter six integers:\n");
	for(int i = 0; i < 6; i++) {
	scanf("%i",&l);
	a++;
	if(a==1) {
	printf("1234567890bb1234567890\n");
	}if(i%2==0){
	printf("%*d",10,l);
	}else{
	printf("  ");
	printf("%*d\n",10,l);
	}
	}
}
