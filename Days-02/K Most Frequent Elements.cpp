#include <queue>
#include <bits/stdc++.h>
vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    // Write your code here.
    priority_queue<pair<int,int>>pq;
    map<int,int>mp;
    vector<int>v;
    int temp = 0;
    for(int i = 0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto it:mp)
        pq.push({it.second,it.first});
//     while(!pq.empty()){
//         int temp = pq.top();
//         v.push_back(temp);
//         pq.pop();
//     }
    for(int i = 0;i<k;i++){
        int temp = pq.top().second;
        v.push_back(temp);
        pq.pop();
    }
    sort(v.begin(),v.end());
    return v;
}