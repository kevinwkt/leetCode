vector<int> hour = {1,2,4,8}, mins = {1,2,4,8,16,32};

void recurse(vector<string> &ans, pair<int,int> time, int choice, int n){
    if(n == 0){
        ans.push_back(to_string(time.first)+(time.second<10? ":0":":")+to_string(time.second));
        return;
    }
    
    for(int i=choice;i<(hour.size()+mins.size());i++){
        if(i<hour.size()){
            time.first+=hour[i];
            if(time.first<12) recurse(ans,time,i+1,n-1);
            time.first-=hour[i];
        }else{
            time.second+=mins[i-hour.size()];
            if(time.second<60) recurse(ans,time,i+1,n-1);
            time.second-=mins[i-hour.size()];
        }
    }
}

vector<string> readBinaryWatch(int num) {
    vector<string> ans;
    recurse(ans,make_pair(0,0), 0, num);
    return ans;
}
