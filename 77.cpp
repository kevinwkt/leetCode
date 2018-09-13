vector<vector<int>> &ans, vector<int> curr, int k, int n, int start){
    if(curr.size()==k){
        ans.push_back(curr);
        return;
    }
    
    for(int i=start;i<=n;i++){
        curr.push_back(i);
        recurse(ans,curr,k,n,i+1);
        curr.pop_back();
    }
}

vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> ans;
    recurse(ans,vector<int>(),k,n,1);
    return ans;
}
