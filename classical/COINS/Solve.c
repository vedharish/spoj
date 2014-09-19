#define SIZE 100000

#include <stdio.h>

int memo[SIZE+1];

long long get(long long number){
    if(number < SIZE && memo[number] != 0) return memo[number];
    long long temp;
    if(number == 0) return 0;
    if(number == 1) return 1;
    if(number == 2) return 2;
    if(number == 3) return 3;
    if(number == 4) return 4;
    temp = get(number/2) + get(number/3) + get(number/4);
    if(number > temp){
	if(number < SIZE) memo[number] = number;
	return number;
    }
    if(number < SIZE) memo[number] = temp;
    return temp;
}

void init_memo(int start, int end){
    if(start >= SIZE) return;
    if(end >= SIZE) end = SIZE-1;
    int iter;
    for(iter=start; iter<=end; iter++){
	memo[iter] = 0;
    }
}

int main(){
    int iter, legal=4;
    long long n;
    memo[0] = 0;
    memo[1] = 1;
    memo[2] = 2;
    memo[3] = 3;
    memo[4] = 4;
    while(scanf("%lld",&n)!=EOF){
	init_memo(legal+1, n);
	legal = n;
	printf("%lld\n", get(n));
    }
    return 0;
}
