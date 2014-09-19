#include<stdio.h>

int main() {
    int cases, ng, nm, temp;
    int god_max, mec_max, iter;
    scanf("%d", &cases);
    while(cases-- > 0) {
        getchar();
        ng = 0, nm = 0;
        god_max = 0, mec_max = 0;
        scanf("%d %d\n", &ng, &nm);
        iter = 0;
        while(iter < ng){
            scanf("%d", &temp);
            if(temp > god_max) god_max = temp;
            iter++;
        }
        iter = 0;
        while(iter < nm){
            scanf("%d", &temp);
            if(temp > mec_max) mec_max = temp;
            iter++;
        }
        if(god_max < mec_max) printf("MechaGodzilla\n");
        else printf("Godzilla\n");
    }
    return 0;
}
