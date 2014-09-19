#include <stdio.h>
#include <math.h>

int memo[5005];

int ways(int num_arr[], int start, int end){
    if(memo[start] != 0) return memo[start];
    int digits=end-start;
    if(start == end){
	memo[start] = 1;
	return 1;
    }
    int first_digit=num_arr[start];
    int next_start=start+1;
    if(first_digit > 2){
	memo[start] = ways(num_arr, next_start, end);
	return memo[start];
    }
    if(first_digit == 0) return 0;
    else{
	int second_digit=num_arr[start+1];
	int next_next_start = start+2;
	if(second_digit==0){
	    if(next_next_start > end){
		memo[start] = 1;
	        return 1;
	    }
	    memo[start] = ways(num_arr, next_next_start, end);
	    return memo[start];
	}
	if(first_digit==1){
	    if(next_next_start > end){
		memo[start] = 1+ways(num_arr, next_start, end);
		return memo[start];
	    }else if(next_next_start==end && num_arr[end] == 0){
		memo[start] = 0;
		return 1;
	    }else{
		memo[start] = ways(num_arr, next_start, end)+ways(num_arr, next_next_start, end);
		return memo[start];
	    }
	}
	if(first_digit==2){
	    if(second_digit>6){
		memo[start] = ways(num_arr, next_next_start, end);
		return memo[start];
	    }else if(next_next_start < end || (next_next_start==end && num_arr[end] != 0)){
		memo[start] = ways(num_arr, next_start, end)+ways(num_arr, next_next_start, end);
		return memo[start];
	    }else if(next_next_start==end && num_arr[end]==0){
		memo[start] = 1;
		return memo[start];
            }else if(next_next_start > end){
		memo[start] = 1+ways(num_arr, next_start, end);
		return memo[start];
	    }
	}
    }
    return 1;
}

int main(){
    int iter=0;
    int num_arr[5005];
    char c;
    while(1 == 1){
	iter=0;
	c = getchar();
	if(c=='0') return 0;
	while(c!='\n'){
	    memo[iter] = 0;
	    num_arr[iter]=c-'0';
	    iter++;
	    c=getchar();
	}
	printf("%d\n", ways(num_arr, 0, iter-1));
    }
    return 0;
}
