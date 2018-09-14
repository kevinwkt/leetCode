int climbStairs(int n) {
    int j=0, k=1, temp;
    for(int i=0;i<n;i++){
        temp=j;
        j=k;
        k=temp+j;           
    }
    return k;
}
