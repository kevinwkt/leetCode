void recurse(vector<int>& options, vector<vector<int>>& ans, vector<int>& combinations, int target, int idx){
    if(target<0) return;
    if(target==0) {
        ans.push_back(combinations);
        return;
    }
    
    for(int i=idx;i<options.size();i++){
        combinations.push_back(options[i]);
        recurse(options,ans,combinations,target-options[i],i);
        combinations.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    vector<int> combination;
    recurse(candidates, ans, combination, target, 0);
    return ans;
}
