int titleToNumber(string s) {
    long sum = s[s.length()-1]-'@';
    for(int i=1;i<s.length();i++) sum+=(pow(26,i)*(s[s.length()-i-1]-'@'));
    return sum;
}    
