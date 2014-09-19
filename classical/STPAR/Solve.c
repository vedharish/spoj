#include <stdio.h>

int main() {
    int total, stack[100000], stack_last, input_number, required, total_scan;
    while(1 == 1) {
	scanf("%d", &total);
	total_scan = total;
	stack_last = 0;
	required = 1;
	if(total == 0) return 0;
	while(total > 0){
	    if(stack_last > 0 && stack[stack_last-1] == required){
		stack_last--;
		total--;
		required++;
		continue;
	    }
	    if(total_scan > 0){
		scanf("%d", &input_number);
	        total_scan--;
	    }else{
		total = 0;
		stack_last = 1;
		continue;
	    }
	    if(input_number == required){
		total--;
		required++;
	    }else{
		stack[stack_last] = input_number;
		stack_last++;
	    }
	}
	if(total == 0 && stack_last == 0) printf("yes\n");
	else printf("no\n");
    }
    return 0;
}  
