#include <stdio.h>

int main(){
    int men[11], lady[11], cases, number, iter, temp, answer;
    char c;
    scanf("%d", &cases);
    while(getchar() != '\n');
    while(cases--){
	scanf("%d", &number);
	while(getchar()!='\n');
	for(iter=0; iter<11; iter++){
	    men[iter] = 0;
	    lady[iter] = 0;
	}
	for(iter=0; iter<number; iter++){
	    c = getchar();
	    if(c != '1'){
		men[c-'0']++;
		getchar();
	    }else{
		c = getchar();
		if(c == '0'){
		    men[10]++;
		    getchar();
		}else men[1]++;
	    }
	}
	for(iter=0; iter<number; iter++){
	    c = getchar();
	    if(c != '1'){
		lady[c-'0']++;
		getchar();
	    }else{
		c = getchar();
		if(c == '0'){
		    lady[10]++;
		    getchar();
		}else lady[1]++;
	    }
	}
	iter = 10;
	temp = 10;
	answer = 0;
	while(iter >= 0){
	    if(men[iter] == 0) iter--;
	    else if(lady[temp] == 0) temp--;
	    else{
		men[iter]--;
		lady[temp]--;
		answer += temp*iter;
	    }
	}
	printf("%d\n", answer);
    }
}
