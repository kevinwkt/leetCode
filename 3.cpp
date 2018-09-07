int lengthOfLongestSubstring(string s) {
    int visited[256];
    for(int i=0;i<256;i++) visited[i] = -1;
    int maxL = 0;
    int l = s.length()? 1:0;
    visited[s[0]] = 0;
    for(int i=1;i<s.length();i++) {
        if(visited[s[i]] == -1 || visited[s[i]] < i-l) l++;
        else{
            if(maxL < l) maxL = l;
            l = i-visited[s[i]];    
        }
        visited[s[i]] = i;
    }
    if(maxL < l) maxL = l;
    return maxL;
}
