int firstUniqChar(string s) {
    vector<int> counts(26,0);
    for(int i=0;i<s.length();i++) counts[s[i]-'a']++;
    for(int i=0;i<s.length();i++) if(counts[s[i]-'a']==1) return i;
    return -1;
}
