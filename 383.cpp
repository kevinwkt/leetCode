
bool canConstruct(string ransomNote, string magazine) {
    vector<int> arr(26,0);
    bool ans = 1;
    for(int i=0;i<magazine.length();i++) arr[magazine[i]-'a']++;
    for(int i=0;i<ransomNote.length();i++) arr[ransomNote[i]-'a']? arr[ransomNote[i]-'a']-- : ans=0;
    return ans;
}
