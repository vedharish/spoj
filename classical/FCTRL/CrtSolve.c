#include<stdio.h>

int num5(int number){
    int ret=0;
    while(number%5 == 0){
	ret++;
	number /= 5;
    }
    return ret;
}

int main() {
    int cases, number, nos5;
    scanf("%d\n", &cases);
    while(cases--) {
	nos5 = 0;
	scanf("%d\n", &number);
	while(number >= 5){
	    nos5 += num5(number);
	    number--;
	}
	printf("%d\n",  nos5);
    }
    return 0;
}  
