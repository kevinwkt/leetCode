int mySqrt(int x) {
    if (x == 0 || x == 1) return x; 
    long start = 1, end = x, ans;   
    
    while (start <= end) {         
        long mid = start+(end-start)/2; 

        if (mid*mid == x) return mid; 
        if (mid*mid < x) { 
            start = mid + 1; 
            ans = mid; 
        } else end = mid - 1;         
    } 
    return ans;
}
