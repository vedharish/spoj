#include<stdio.h>

int main() {
    int number;
    while(1 == 1){
	scanf("%d",&number);
	if(number == 0) return 0;
	printf("%0.2f\n", number*number/6.28318);
    }
    return 0;
}  
