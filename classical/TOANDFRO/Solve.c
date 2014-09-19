#include <stdio.h>

int main() {
    int n, i, t;
    char r[200];
    scanf("%d\n", &n);
    while(n != 0){
	i=0;
	while((r[i] = getchar()) != '\n') i++;
	t = i;
	i=0;
	int temp=0, o=0;
	while(o<n){
	    temp=0;
	    while(temp<t/n){
		if(temp%2 == 0) i = n*temp+o;
		else i = n*(temp+1)-1-o;
		putchar(r[i]);
		temp++;
	    }
	    o++;
	}
	putchar('\n');
	scanf("%d\n", &n);
    }
    return 0;
}
