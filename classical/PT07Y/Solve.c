#include <stdio.h>

int main() {
    int nodes, edges, nodes_arr[100000], iter, temp1, temp2, flag=0;
    scanf("%d %d", &nodes, &edges);
    iter = 0;
    if(nodes - 1 != edges){
	flag = 1;
	for(iter; iter<=edges; iter++){
	    scanf("%d %d", &temp1, &temp2);
	}
    }else{
	for(iter; iter<=nodes; iter++){
	    nodes_arr[iter] = iter;
	}
	iter = 0;
	for(iter; iter<edges; iter++){
	    scanf("%d %d", &temp1, &temp2);
	    nodes_arr[temp1] = 0;
	    nodes_arr[temp2] = 0;
	}
	iter = 0;
	for(iter; iter<=nodes; iter++){
	    if(nodes_arr[iter] != 0) flag = 1;
	}
    }
    if(flag == 0) printf("YES\n");
    else printf("NO\n");
    return 0;
}  
