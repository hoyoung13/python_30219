#include <stdio.h>
int main(){
	int sum=0;
	for (int i=0; i<11; i++){
		printf("%d",i);
		sum=sum+i;
	}
	printf("%d",sum);
}
