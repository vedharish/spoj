#include <stdio.h>

void insert_sorted_array(int insert_num, int num[], int friends){
    int temp=0, iter;
    for(iter=0; iter<friends; iter++){
        if(insert_num>num[iter]){
            temp = num[iter];
            num[iter] = insert_num;
            insert_num = temp;
        }
    }
}

int main(int argc, char *argv[]){
    int cases, friends, iter, temp, turn;
    long remaining;
    int num[1000];
    scanf("%d\n", &cases);
    for(turn=1; turn<=cases; turn++){
        scanf("%ld %d\n", &remaining, &friends);
        for(iter=0; iter<friends; iter++){
            num[iter]=0;
            scanf("%d", &temp);
            insert_sorted_array(temp, num, friends);
        }
        iter=0;
        while(remaining>0 && iter<friends){
            remaining -= num[iter];
            iter++;
        }
        printf("Scenario #%d:\n", turn);
        if(iter>=friends && remaining != 0) printf("impossible");
        else printf("%d", iter);
        if(turn!=cases) printf("\n\n");
    }
    return 0;
}
