c,t,q;
main(){
    t=0;
    scanf("%d",&c);
    for(;c--;scanf("%d",&q),t+=(q>0)*q);
    printf("%d",t);
    return 0;
}
