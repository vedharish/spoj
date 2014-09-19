#include <stdio.h>

int main() {
    int n, i, r;
    scanf("%d\n", &n);
    while(n != 0){
	r=0;
	for(i=1; i<=n; i++){
	    r += i*i;
	}
	printf("%d\n", r);
	scanf("%d\n", &n);
    }
    return 0;
}
