#include <stdio.h>

int main(){
    int numbers, iter, num_arr[100000], temp;
    char c;
    while(1 == 1){
	c='a';
	scanf("%d\n", &numbers);
	if(numbers == 0) return 0;
	for(iter=0; iter<numbers; iter++){
	    num_arr[iter] = 0;
	}
	for(iter=0; iter<numbers; iter++){
	    temp = 0;
	    scanf("%d", &temp);
	    getchar();
	    if(c == 'a'){
		if(num_arr[iter] == 0) num_arr[iter] = temp;
		else{
		    if(num_arr[iter] != temp) c='n';
		}
		if(num_arr[temp-1] == 0) num_arr[temp-1] = iter+1;
		else{
		    if(num_arr[temp-1] != iter+1) c='n';
		}
	    }
	}
	if(c=='a') printf("ambiguous\n");
	else printf("not ambiguous\n");
    }
    return 0;
}
