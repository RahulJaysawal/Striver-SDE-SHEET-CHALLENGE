#include<bits/stdc++.h>
void helper(int i,vector<int> arr,vector<int>&smallans,vector<vector<int>>&ans,int n){
    
    if(i==n){
        ans.push_back(smallans);
        return;
    }
    smallans.push_back(arr[i]);
    helper(i+1,arr,smallans,ans,n);
    smallans.pop_back();
    while(i+1<n && arr[i]==arr[i+1]){
        i++;
    }
    helper(i+1,arr,smallans,ans,n);
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
    vector<vector<int>> ans;
    vector<int> smallans;
    sort(arr.begin(),arr.end());
    helper(0,arr,smallans,ans,n);
    sort(ans.begin(),ans.end());
    return ans;
}