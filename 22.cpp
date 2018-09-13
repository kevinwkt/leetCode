vector<string> &ans, string curr, int start, int end){
    if(start==0 && end==0){
        ans.push_back(curr);
        return;
    }
    if(start>0) recurse(ans,curr+"(",start-1,end+1);
    if(end>0) recurse(ans,curr+")",start,end-1);
}

vector<string> generateParenthesis(int n) {
    vector<string> ans;
    recurse(ans,"",n,0);
    return ans;
}
