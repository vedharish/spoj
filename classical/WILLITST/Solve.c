#include <stdio.h>

int main(){
    unsigned long long n;
    scanf("%llu\n", &n);
    while(n >= 1){
	if(n%2 == 0) n /= 2;
	else if(n%2 != 0){
	    printf("NIE");
	    return 0;
	}
	if(n == 1){
	    printf("TAK");
	    return 0;
	}
    }
    return 0;
}
