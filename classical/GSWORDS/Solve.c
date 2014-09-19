#include <stdio.h>
#include <math.h>

#define MAX_SIZE 10000000
unsigned long long memo_arr[MAX_SIZE] = {0};

unsigned long long solve(unsigned long long number){
    if(number == 2) return 3;
    else if(number == 3) return 4;
    else if(number == 4) return 6;
    else if(number == 5) return 9;
    else if(number < MAX_SIZE && memo_arr[number] != 0) return memo_arr[number];
    else{
	unsigned long long answer = solve(number-1)+solve(number-3);
	if(answer >= pow(10, 9)+7) answer %= (unsigned long long)(pow(10,9)+7);
	if(number<MAX_SIZE) memo_arr[number] = answer;
	return answer;
    }
}

int main() {
    unsigned long long number;
    scanf("%llu", &number);
    printf("%llu\n", solve(number));
    return 0;
}  
