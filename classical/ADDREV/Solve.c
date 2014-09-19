#include<stdio.h>

int main() {
    int cases, num1, temp, iter, num2;
    char a;
    scanf("%d", &cases);
    getchar();
    while(cases--) {
	iter = 1;
	temp=0;
	num1 = 0;
	num2 = 0;
        while((a = getchar()) != ' ') {
	    temp = a - '0';
	    num1 += temp*iter;
	    iter *= 10;
	}
	iter = 1;
	while((a = getchar()) != '\n') {
	    temp = a - '0';
	    num2 += temp*iter;
	    iter *= 10;
	}
	temp = num1+num2;
	num1 = 0;
	while(temp > 0){
	    num1 = num1*10+(temp%10);
	    temp /= 10;
	}
	printf("%d\n", num1);
    }
    return 0;
}  
