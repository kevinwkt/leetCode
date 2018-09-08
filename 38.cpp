string countAndSay(int n) {
    string s = "1";
    for(int i=0;i<n-1;i++){
        cout<<s<<endl;
        string temp = "";
        int count = 0;
        for(int j=0;j<s.length();j++){
            if(j==0) count++;
            else{
                if(s[j]==s[j-1]) count++;
                else{
                    temp+=to_string(count);
                    temp+=s[j-1];
                    count = 1;
                }
            }
        }
        if(count){
            temp+=to_string(count);
            temp+=s[s.length()-1];
            count = 1;
        }
        s = temp;
    }
    return s;
}
