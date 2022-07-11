#include<algorithm>
int maximumActivities(vector<int> &start, vector<int> &end) {
    // Write your code here.
    vector<pair<int,int>> temp;
        for(int i=0;i<start.size();i++){
            temp.push_back({end[i],start[i]});
        }
        sort(temp.begin(),temp.end());
        int ans = 1;
        int j = 0; 
        for(int i=1;i<temp.size();i++){
            if(temp[i].second >=temp[j].first){
                ans++;
                j = i;
//                 flag = temp[i].first;
            }
        }
        return ans;
}
