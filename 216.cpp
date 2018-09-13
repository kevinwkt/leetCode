vector<vector<int> > &ans, vector<int> &curr, int target, int k){
    if(target == 0 && k == curr.size()){
        ans.push_back(curr);
        return;
    }
    if(target<0 || curr.size()>k) return;

    for(int i=curr.size()?curr.back()+1:1;i<=9;i++){
        curr.push_back(i);
        recurse(ans,curr,target-i,k);
        curr.pop_back();
    }
}

vector<vector<int>> combinationSum3(int k, int n) {
    vector<vector<int> > ans;
    vector<int> curr;
    recurse(ans, curr,n,k);
    return ans;
}
