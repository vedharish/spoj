#include <stdio.h>

int main(){
    int temp1, temp2, count1, count2, flag;
    char c;
    while(1 == 1){
	count1 = 0, count2 = 0, flag=0;
	c = getchar();
	if(c == '0') return 0;
	while(c != '\n'){
	    if(c=='0'){
		count2--;
		flag=0;
	    }else if(flag==1){
		if(c<='6'){
		    if(c>'2'){
			count1++;
			count2++;
			flag=0;
		    }else if(c=='1'){
		        count2+=2;
			flag=0;
		    }else if(c=='2'){
		        count2++;
		    }
		}else{
		    count1+=2;
		    flag=0;
		}
	    }else if(c != '1' && c != '2') count1++;
	    else if(c == '1') count2++;
	    else{
	        if(c == '2') flag=1;
	    }
	    if(flag==1) count1++;
	    c=getchar();
	}
	printf("%d %d\n", count1, count2);
    }
    return 0;
}
