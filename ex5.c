#include <stdio.h>

int main() {
	int w;
	int h;
	printf("Please enter width and height:\n");
	scanf("%d", &w);
	if(w == 0){
	printf("End\n");
	return 0;
	}
	scanf("%d", &h);

	if(w<=1){
		if(h==1){
		printf("+\n");
		return 0;
		}
	}

	for(int i = 0; i<h;i++){
		if(i==0||i==h-1){
			for(int k=0;k<w;k++){
			if(k==0||k==w-1){
			printf("+");
			} else {
			printf("-");
			}
			}
			printf("\n");
		} else {
		if(w>=3) {
			for(int k=0;k<w;k++){
				if(k==0||k==w-1){
				printf("|");
				} else {
				printf("~");
				}
			}
			printf("\n");
		
		}



	}
}















}
