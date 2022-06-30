#include <bits/stdc++.h>
#include <queue>
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    // Write your code here. 
    vector<int>v;
    priority_queue<int,vector<int>,greater<int>> pq ;
    int n = kArrays.size();
    for(int i = 0;i<k;i++){
        for(int j = 0;j<kArrays[i].size();j++){
            pq.push(kArrays[i][j]);
        }
    }
    while(!pq.empty()){
        v.push_back(pq.top());
        pq.pop();
    }
//     sort(v.begin(),v.end());
    return v;
}
